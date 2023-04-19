// import <iostream> doesn't work with CLion/CMake ( https://gitlab.kitware.com/cmake/cmake/-/issues/18355 )
#include <iostream>
#include "HelloWorld.h"

#include <fmt/core.h>

int main() {
    HelloWorld::SayHello();

    auto dummy{HelloWorld{}};
    std::cout << "Value is: " << dummy.GetValue() << std::endl;

    fmt::print("Hello, world from FMT!\n");

    return 0;
}
