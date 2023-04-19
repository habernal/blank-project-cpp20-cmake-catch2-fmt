#include <catch2/catch_test_macros.hpp>
#include "HelloWorld.h"

TEST_CASE("Hello world") {
    auto dummy_class{HelloWorld{}};

    REQUIRE(123 == dummy_class.GetValue());
};