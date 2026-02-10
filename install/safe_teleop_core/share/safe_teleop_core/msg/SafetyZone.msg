# SafetyZone message - defines safe/unsafe regions in 3D space
std_msgs/Header header

# Zone identification
string zone_id
string zone_name

# Geometric definition
geometry_msgs/Point center
geometry_msgs/Vector3 size  # bounding box dimensions
float32 safety_margin  # additional margin in meters

# Status
bool is_active  # true if robot can enter
uint8 priority  # 0=low, 1=medium, 2=high, 3=critical

# Dynamic properties
bool is_dynamic  # true if zone contains moving objects
float32 velocity_magnitude  # m/s, for dynamic zones
