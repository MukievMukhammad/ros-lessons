; Auto-generated. Do not edit!


(cl:in-package mapping-srv)


;//! \htmlinclude CleanMap-request.msg.html

(cl:defclass <CleanMap-request> (roslisp-msg-protocol:ros-message)
  ((map
    :reader map
    :initarg :map
    :type nav_msgs-msg:OccupancyGrid
    :initform (cl:make-instance 'nav_msgs-msg:OccupancyGrid)))
)

(cl:defclass CleanMap-request (<CleanMap-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CleanMap-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CleanMap-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mapping-srv:<CleanMap-request> is deprecated: use mapping-srv:CleanMap-request instead.")))

(cl:ensure-generic-function 'map-val :lambda-list '(m))
(cl:defmethod map-val ((m <CleanMap-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mapping-srv:map-val is deprecated.  Use mapping-srv:map instead.")
  (map m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CleanMap-request>) ostream)
  "Serializes a message object of type '<CleanMap-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'map) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CleanMap-request>) istream)
  "Deserializes a message object of type '<CleanMap-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'map) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CleanMap-request>)))
  "Returns string type for a service object of type '<CleanMap-request>"
  "mapping/CleanMapRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CleanMap-request)))
  "Returns string type for a service object of type 'CleanMap-request"
  "mapping/CleanMapRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CleanMap-request>)))
  "Returns md5sum for a message object of type '<CleanMap-request>"
  "c2d6361d68f292f131ab1a72820f26d3")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CleanMap-request)))
  "Returns md5sum for a message object of type 'CleanMap-request"
  "c2d6361d68f292f131ab1a72820f26d3")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CleanMap-request>)))
  "Returns full string definition for message of type '<CleanMap-request>"
  (cl:format cl:nil "# Get the map as a nav_msgs/OccupancyGrid~%nav_msgs/OccupancyGrid map~%~%================================================================================~%MSG: nav_msgs/OccupancyGrid~%# This represents a 2-D grid map, in which each cell represents the probability of~%# occupancy.~%~%Header header ~%~%#MetaData for the map~%MapMetaData info~%~%# The map data, in row-major order, starting with (0,0).  Occupancy~%# probabilities are in the range [0,100].  Unknown is -1.~%int8[] data~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: nav_msgs/MapMetaData~%# This hold basic information about the characterists of the OccupancyGrid~%~%# The time at which the map was loaded~%time map_load_time~%# The map resolution [m/cell]~%float32 resolution~%# Map width [cells]~%uint32 width~%# Map height [cells]~%uint32 height~%# The origin of the map [m, m, rad].  This is the real-world pose of the~%# cell (0,0) in the map.~%geometry_msgs/Pose origin~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CleanMap-request)))
  "Returns full string definition for message of type 'CleanMap-request"
  (cl:format cl:nil "# Get the map as a nav_msgs/OccupancyGrid~%nav_msgs/OccupancyGrid map~%~%================================================================================~%MSG: nav_msgs/OccupancyGrid~%# This represents a 2-D grid map, in which each cell represents the probability of~%# occupancy.~%~%Header header ~%~%#MetaData for the map~%MapMetaData info~%~%# The map data, in row-major order, starting with (0,0).  Occupancy~%# probabilities are in the range [0,100].  Unknown is -1.~%int8[] data~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: nav_msgs/MapMetaData~%# This hold basic information about the characterists of the OccupancyGrid~%~%# The time at which the map was loaded~%time map_load_time~%# The map resolution [m/cell]~%float32 resolution~%# Map width [cells]~%uint32 width~%# Map height [cells]~%uint32 height~%# The origin of the map [m, m, rad].  This is the real-world pose of the~%# cell (0,0) in the map.~%geometry_msgs/Pose origin~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CleanMap-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'map))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CleanMap-request>))
  "Converts a ROS message object to a list"
  (cl:list 'CleanMap-request
    (cl:cons ':map (map msg))
))
;//! \htmlinclude CleanMap-response.msg.html

(cl:defclass <CleanMap-response> (roslisp-msg-protocol:ros-message)
  ((map
    :reader map
    :initarg :map
    :type nav_msgs-msg:OccupancyGrid
    :initform (cl:make-instance 'nav_msgs-msg:OccupancyGrid)))
)

(cl:defclass CleanMap-response (<CleanMap-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CleanMap-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CleanMap-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mapping-srv:<CleanMap-response> is deprecated: use mapping-srv:CleanMap-response instead.")))

(cl:ensure-generic-function 'map-val :lambda-list '(m))
(cl:defmethod map-val ((m <CleanMap-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mapping-srv:map-val is deprecated.  Use mapping-srv:map instead.")
  (map m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CleanMap-response>) ostream)
  "Serializes a message object of type '<CleanMap-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'map) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CleanMap-response>) istream)
  "Deserializes a message object of type '<CleanMap-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'map) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CleanMap-response>)))
  "Returns string type for a service object of type '<CleanMap-response>"
  "mapping/CleanMapResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CleanMap-response)))
  "Returns string type for a service object of type 'CleanMap-response"
  "mapping/CleanMapResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CleanMap-response>)))
  "Returns md5sum for a message object of type '<CleanMap-response>"
  "c2d6361d68f292f131ab1a72820f26d3")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CleanMap-response)))
  "Returns md5sum for a message object of type 'CleanMap-response"
  "c2d6361d68f292f131ab1a72820f26d3")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CleanMap-response>)))
  "Returns full string definition for message of type '<CleanMap-response>"
  (cl:format cl:nil "nav_msgs/OccupancyGrid map~%~%~%================================================================================~%MSG: nav_msgs/OccupancyGrid~%# This represents a 2-D grid map, in which each cell represents the probability of~%# occupancy.~%~%Header header ~%~%#MetaData for the map~%MapMetaData info~%~%# The map data, in row-major order, starting with (0,0).  Occupancy~%# probabilities are in the range [0,100].  Unknown is -1.~%int8[] data~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: nav_msgs/MapMetaData~%# This hold basic information about the characterists of the OccupancyGrid~%~%# The time at which the map was loaded~%time map_load_time~%# The map resolution [m/cell]~%float32 resolution~%# Map width [cells]~%uint32 width~%# Map height [cells]~%uint32 height~%# The origin of the map [m, m, rad].  This is the real-world pose of the~%# cell (0,0) in the map.~%geometry_msgs/Pose origin~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CleanMap-response)))
  "Returns full string definition for message of type 'CleanMap-response"
  (cl:format cl:nil "nav_msgs/OccupancyGrid map~%~%~%================================================================================~%MSG: nav_msgs/OccupancyGrid~%# This represents a 2-D grid map, in which each cell represents the probability of~%# occupancy.~%~%Header header ~%~%#MetaData for the map~%MapMetaData info~%~%# The map data, in row-major order, starting with (0,0).  Occupancy~%# probabilities are in the range [0,100].  Unknown is -1.~%int8[] data~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: nav_msgs/MapMetaData~%# This hold basic information about the characterists of the OccupancyGrid~%~%# The time at which the map was loaded~%time map_load_time~%# The map resolution [m/cell]~%float32 resolution~%# Map width [cells]~%uint32 width~%# Map height [cells]~%uint32 height~%# The origin of the map [m, m, rad].  This is the real-world pose of the~%# cell (0,0) in the map.~%geometry_msgs/Pose origin~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CleanMap-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'map))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CleanMap-response>))
  "Converts a ROS message object to a list"
  (cl:list 'CleanMap-response
    (cl:cons ':map (map msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'CleanMap)))
  'CleanMap-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'CleanMap)))
  'CleanMap-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CleanMap)))
  "Returns string type for a service object of type '<CleanMap>"
  "mapping/CleanMap")