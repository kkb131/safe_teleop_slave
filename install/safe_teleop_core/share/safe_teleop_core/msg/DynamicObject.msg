# DynamicObject message - tracked moving object
std_msgs/Header header

# Object identification
string object_id
uint64 tracking_id  # unique tracking number

# Motion information
geometry_msgs/Pose current_pose
geometry_msgs/Twist velocity
geometry_msgs/Vector3 bounding_box

# Classification
uint8 PERSON = 0
uint8 MOVING_OBJECT = 1
uint8 ROBOT_INTERACTION = 2  # object moved by robot
uint8 object_class

# Tracking quality
float32 tracking_confidence  # 0.0 to 1.0
uint32 frames_tracked  # number of consecutive frames

# Temporal information
builtin_interfaces/Time first_detected
builtin_interfaces/Time last_updated
