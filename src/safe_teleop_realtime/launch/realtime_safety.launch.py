#!/usr/bin/env python3
"""
realtime_safety.launch.py - Launch real-time safety system on slave

Launches:
- collision_detector_node: Real-time collision detection (<50ms)
- safety_monitor_node: Safety status aggregator
"""

from launch import LaunchDescription
from launch.substitutions import PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Config file path
    config_file = PathJoinSubstitution([
        FindPackageShare('safe_teleop_realtime'),
        'config',
        'collision_detector_config.yaml'
    ])

    # Collision detector (real-time)
    collision_detector_node = Node(
        package='safe_teleop_realtime',
        executable='collision_detector_node',
        name='collision_detector_node',
        output='screen',
        parameters=[config_file],
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
        collision_detector_node,
        safety_monitor_node,
    ])
