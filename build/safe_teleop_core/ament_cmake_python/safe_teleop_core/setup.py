from setuptools import find_packages
from setuptools import setup

setup(
    name='safe_teleop_core',
    version='0.1.0',
    packages=find_packages(
        include=('safe_teleop_core', 'safe_teleop_core.*')),
)
