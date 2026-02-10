# CollisionWarning message - real-time collision risk assessment
std_msgs/Header header

# Severity levels
uint8 NONE = 0
uint8 LOW = 1
uint8 MEDIUM = 2
uint8 HIGH = 3
uint8 CRITICAL = 4  # immediate stop required

uint8 severity

# Collision details
string object_id  # ID of object at risk
float32 distance_to_collision  # meters
float32 time_to_collision  # seconds (estimated)

# Recommended action
bool emergency_stop_required
bool velocity_reduction_required
float32 max_safe_velocity  # m/s

# Source of warning
string warning_source  # "esdf", "pointcloud", "sensor"
