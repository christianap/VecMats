#include <iostream>

#include "maths.h"

int main()
{
    std::cout << "Hello, World!" << std::endl;
    
    vec2 vector1(1.0f, 2.0f);
    vec2 vector2(1.0f, 1.0f);
    vec2 vector3 = vector1 + vector2;
    std::cout << vector1 << std::endl;
    std::cout << vector3 << std::endl;
    std::cout << vector1 + vector2 << std::endl;
    
    std::cout << "Press ENTER to Exit! ";
    std::cin.ignore(std::cin.rdbuf()->in_avail()+1);
    return 0;
}
