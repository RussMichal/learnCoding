#include <iostream>

int Lesson1()
{
    std::cout << "temp F please: ";
    float tempF;
    std::cin >> tempF;

    float tempC = (tempF - 32) * (5 / 9.0f);
    std::cout << "your temp in C is " << tempC << std::endl;
    return 0;
}