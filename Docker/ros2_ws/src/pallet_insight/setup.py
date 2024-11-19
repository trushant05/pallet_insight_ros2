from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'pallet_insight'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.launch.py')),
        (os.path.join('share', package_name, 'images'), glob('images/*')),
        (os.path.join('share', package_name, 'models'), ['models/segmentation/yolov11_m_seg_100_ep.engine']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Trushant Adeshara',
    maintainer_email='trushant@umich.edu',
    description='Pallet detection and segmentation package.',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'dummy_publisher = pallet_insight.dummy_publisher:main',
            'inference_node = pallet_insight.inferer:main'
        ],
    },
)
