#include <iostream>
#include "some_lib.h"

void SomeClass::sayHello(std::string s) {
    std::cerr << "Hello from lib, " << s << std::endl;
}