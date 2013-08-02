FILE(REMOVE_RECURSE
  "../msg_gen"
  "../src/odometry/msg"
  "../msg_gen"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "../src/odometry/msg/__init__.py"
  "../src/odometry/msg/_encoder.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
