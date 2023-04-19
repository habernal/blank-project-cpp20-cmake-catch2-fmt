cmake_minimum_required(VERSION 3.22.1)
project(blank_project_cpp20_cmake_catch2_fmt)

set(CMAKE_CXX_STANDARD 20)

# add_subdirectory needs to be called separately for src and tests
add_subdirectory(src)
add_subdirectory(test)


# Dependency management: Add {fmt}, Implementation of C++20 std::format
include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY git@github.com:fmtlib/fmt.git
        GIT_TAG 9.1.0
)
FetchContent_MakeAvailable(fmt)


