# SafetyStatus message - overall system safety state

std_msgs/Header header

# Safety mode (matches C++ enum in collision_detector_node.cpp)
uint8 NORMAL = 0        # Master connected, all sensors active
uint8 DEGRADED = 1      # Master disconnected, using cached ESDF
uint8 EMERGENCY = 2     # Sensor failure or critical collision

uint8 safety_mode

# System health
bool master_connected
bool esdf_available
bool pointcloud_available
bool emergency_stop_active

# Timing diagnostics
float32 esdf_age_sec          # seconds since last ESDF update
float32 pointcloud_age_sec    # seconds since last PointCloud
float32 last_collision_check_ms  # latency of last collision check

# Active warnings
uint8 active_collision_severity  # from CollisionWarning
float32 min_distance_to_obstacle  # meters

# Performance metrics
float32 avg_collision_check_latency_ms
uint32 collision_checks_per_sec

# Recommended actions
bool velocity_limit_active
float32 max_safe_velocity  # m/s
