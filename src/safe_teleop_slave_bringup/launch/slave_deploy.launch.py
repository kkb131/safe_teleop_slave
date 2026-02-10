#!/usr/bin/env python3
"""
slave_deploy.launch.py - Launch SafeTeleOp slave system (Jetson AGX Orin)

This launches the slave system components:
1. RealSense camera drivers (2+ cameras)
2. Real-time collision detector
3. Safety monitor
4. Robot driver (UR10e)

Data flow:
  Cameras → RGB-D published → WiFi → Master (nvblox)
  Master → ESDF → WiFi → Collision Detector (this system)
  Collision Detector → Emergency Stop (if needed)

Usage:
    ros2 launch safe_teleop_slave_bringup slave_deploy.launch.py
"""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Declare arguments
    declare_robot_ip = DeclareLaunchArgument(
        'robot_ip',
        default_value='192.168.1.10',
        description='UR10e robot IP address'
    )

    declare_num_cameras = DeclareLaunchArgument(
        'num_cameras',
        default_value='2',
        description='Number of RealSense cameras'
    )

    robot_ip = LaunchConfiguration('robot_ip')
    num_cameras = LaunchConfiguration('num_cameras')

    # === RealSense Camera 1 (Gripper-mounted) ===
    camera1_node = Node(
        package='realsense2_camera',
        executable='realsense2_camera_node',
        name='camera1',
        namespace='camera1',
        parameters=[{
            'serial_no': '',  # Auto-detect or specify serial
            'depth_module.profile': '640x480x30',
            'rgb_camera.profile': '640x480x30',
            'enable_sync': True,
            'align_depth.enable': True,
        }],
        remappings=[
            ('/camera1/color/image_raw', '/camera1/color/image_raw'),
            ('/camera1/depth/image_rect_raw', '/camera1/aligned_depth_to_color/image_raw'),
        ],
        output='screen'
    )

    # === RealSense Camera 2 (Stand-mounted) ===
    camera2_node = Node(
        package='realsense2_camera',
        executable='realsense2_camera_node',
        name='camera2',
        namespace='camera2',
        parameters=[{
            'serial_no': '',  # Auto-detect or specify serial
            'depth_module.profile': '640x480x30',
            'rgb_camera.profile': '640x480x30',
            'enable_sync': True,
            'align_depth.enable': True,
        }],
        remappings=[
            ('/camera2/color/image_raw', '/camera2/color/image_raw'),
            ('/camera2/depth/image_rect_raw', '/camera2/aligned_depth_to_color/image_raw'),
        ],
        output='screen'
    )

    # === Collision Detector (C++ - Real-time) ===
    collision_detector_node = Node(
        package='safe_teleop_realtime',
        executable='collision_detector_node',
        name='collision_detector',
        output='screen',
        parameters=[
            PathJoinSubstitution([
                FindPackageShare('safe_teleop_slave_bringup'),
                'config',
                'collision_detector.yaml'
            ])
        ]
    )

    # === Safety Monitor ===
    safety_monitor_node = Node(
        package='safe_teleop_realtime',
        executable='safety_monitor_node',
        name='safety_monitor',
        output='screen'
    )

    # === UR Robot Driver (optional - uncomment when deploying) ===
    # ur_driver_launch = IncludeLaunchDescription(
    #     PythonLaunchDescriptionSource([
    #         PathJoinSubstitution([
    #             FindPackageShare('ur_robot_driver'),
    #             'launch',
    #             'ur_control.launch.py'
    #         ])
    #     ]),
    #     launch_arguments={
    #         'robot_ip': robot_ip,
    #         'ur_type': 'ur10e',
    #     }.items()
    # )

    return LaunchDescription([
        # Arguments
        declare_robot_ip,
        declare_num_cameras,

        # Nodes
        camera1_node,
        camera2_node,
        collision_detector_node,
        safety_monitor_node,
        # ur_driver_launch,  # Uncomment for robot control
    ])
