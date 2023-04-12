#include <iostream>

int AlenaLesson1()
{
    //int number 0
    //float decmals 0.0f
    //char charaters 'a'
    //string "asdfasdf"
    std::string name;
    int age;

    std::cout << "Enter your first name please:" << std::endl; 
    std::cin >> name;


    std::cout << "How old are you?:" << std::endl;
    std::cin >> age;

    std::cout << "Hello " << name << " its nice to meet you!" << std::endl;
    std::cout << "you are " << age << std::endl;

    float km, mi;
    std::cout << "Convert kilometers to miles " << std::endl;
    std::cout << "enter kilometers here please: " << std::endl;
    std::cin >> km;

    mi = (km / 1.609344f);
    std::cout << "your number of miles is:" << mi << std::endl;
    std::cout << std::endl;

    return 0;
}