#include <iostream>
#include "HelloWorld.h"

void HelloWorld::SayHello() {
    std::cout << "SayHello!" << std::endl;
}

int HelloWorld::ReturnInput(int value) {
    return value;
}

int HelloWorld::GetValue() {
    return _value;
}