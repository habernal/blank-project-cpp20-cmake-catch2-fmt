# unit_tests_app is an arbitrary name of the built executable file
add_executable(unit_tests_app UnitTests.cpp)

# Dependency management: Add micro-test framework (1.1.9 release)
# so we can import <boost/ut.hpp> in tests
include(FetchContent)
FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v3.3.2
)
FetchContent_MakeAvailable(Catch2)

# and also "lib_sources" is the arbitrary name for the source library
target_link_libraries(unit_tests_app PRIVATE lib_sources Catch2::Catch2WithMain fmt)
