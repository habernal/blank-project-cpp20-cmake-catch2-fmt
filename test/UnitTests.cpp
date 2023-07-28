#include <catch2/catch_test_macros.hpp>
#include "HelloWorld.h"
#include <fmt/core.h>

TEST_CASE("Hello world") {
    auto dummy_class{HelloWorld{}};
    fmt::print("Test");

    REQUIRE(123 == dummy_class.GetValue());
};