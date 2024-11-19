# Launch file for the dummy publisher
import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    package_share_directory = get_package_share_directory('pallet_insight')
    image_folder = os.path.join(package_share_directory, 'images')

    model_path = os.path.join(package_share_directory, 'models/yolov11_m_seg_100_ep.engine')

    return LaunchDescription([

        Node(
            package='pallet_insight',
            executable='inference_node',
            name='inference_node',
            output='screen',
            parameters=[
                {'model': model_path},
                {'threshold': 0.1},
                {'iou': 0.5},
                {'imgsz_height': 640},
                {'imgsz_width': 640},
                {'half': False},
                {'int8': False},
            ]
        ),
    ])

