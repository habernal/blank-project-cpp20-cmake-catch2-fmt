#pragma once

class HelloWorld {
protected:
    int _value{1234};
public:
    static void SayHello();

    static int ReturnInput(int value);

    int GetValue();
};