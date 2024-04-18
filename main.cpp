#include "submodule.h"
#include <iostream>

int main(int, char**){
    std::cout << "Hello, from super-module!\n";
    say_hello("Hello, from sub-module!");
    return 0;
}
