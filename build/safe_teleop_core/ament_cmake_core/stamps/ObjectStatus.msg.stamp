# ObjectStatus message - represents state of a detected object
std_msgs/Header header

# Object identification
string object_id
string object_type  # e.g., "box", "person", "tool"

# Spatial information
geometry_msgs/Pose pose
geometry_msgs/Vector3 bounding_box

# Classification
uint8 STATIC = 0
uint8 DYNAMIC = 1
uint8 STATIC_TO_DYNAMIC = 2  # static object that moved due to robot interaction
uint8 motion_state

# Activation status
bool is_activated  # true = robot can touch, false = collision prohibited

# Confidence
float32 detection_confidence  # 0.0 to 1.0
