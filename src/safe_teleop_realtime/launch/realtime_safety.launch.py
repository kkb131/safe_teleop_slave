#!/usr/bin/env python3
"""
realtime_safety.launch.py - Launch real-time safety system on slave

Launches:
- depth_to_pointcloud_node: Convert depth images to point clouds
- collision_detector_node: Real-time collision detection (<50ms)
- safety_monitor_node: Safety status aggregator
"""

from launch import LaunchDescription
from launch.substitutions import PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Config file paths
    collision_config = PathJoinSubstitution([
        FindPackageShare('safe_teleop_realtime'),
        'config',
        'collision_detector_config.yaml'
    ])

    depth_converter_config = PathJoinSubstitution([
        FindPackageShare('safe_teleop_realtime'),
        'config',
        'depth_to_pointcloud_config.yaml'
    ])

    # Depth to PointCloud converter
    depth_converter_node = Node(
        package='safe_teleop_realtime',
        executable='depth_to_pointcloud_node',
        name='depth_to_pointcloud_node',
        output='screen',
        parameters=[depth_converter_config],
    )

    # Collision detector (real-time)
    collision_detector_node = Node(
        package='safe_teleop_realtime',
        executable='collision_detector_node',
        name='collision_detector_node',
        output='screen',
        parameters=[collision_config],
        # Optional: Real-time priority (requires sudo)
        # prefix=['sudo -E env "PATH=$PATH" nice -n -20'],
    )

    # Safety monitor (aggregator)
    safety_monitor_node = Node(
        package='safe_teleop_realtime',
        executable='safety_monitor_node',
        name='safety_monitor_node',
        output='screen',
    )

    return LaunchDescription([
        depth_converter_node,
        collision_detector_node,
        safety_monitor_node,
    ])
