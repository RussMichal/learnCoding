#include <iostream>

int ImaniLesson1()
{
    std::cout << "Hello" << std::endl;
    std::string name;
    float ft_height;
    float in_height;
    float kg_weight;
    float lbs_weight;

    std::cout << "Please enter your name: " << std::endl;
    std::cin >> name;
    std::cout << "Please enter your inches in inches: " << std::endl;
    std::cin >> in_height;
    std::cout << "Please enter your weight in lbs: " << std::endl;
    std::cin >> lbs_weight;
    ft_height = in_height / 12.0f;
    kg_weight = lbs_weight / 2.2046f;
    std::cout << "Your name is " << name << std::endl;
    std::cout << "Your height is " << in_height << " inches" << std::endl;
    std::cout << "You weight " << kg_weight << " kg" << std::endl;

    return 0;
}