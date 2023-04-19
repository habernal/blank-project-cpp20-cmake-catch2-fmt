# lib_sources is just an arbitrary name
add_library(lib_sources STATIC HelloWorld.cpp HelloWorld.h)

# We want lib_sources to be accessible from unit tests!
target_include_directories(lib_sources PUBLIC .)

# main_app is just an arbitrary name of the output executable app
add_executable(main_app Main.cpp)

# do not forget to add dependencies, e.g., fmt
target_link_libraries(main_app PRIVATE lib_sources fmt)