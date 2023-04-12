#include <iostream>


int AlenaLesson3()
{
    int n;
    char loop_input = 'y';
    long factorial = 1;


    while (loop_input == 'y') {
        std::cout << "Enter a number between 1 and 10 to find the factorial for that number:";
        std::cin >> n;

        if (n < 0 || n >10)
            std::cout << "Error! Invalid number" << std::endl;

        else {
            for (int i = 1; i <= n; ++i) {
                factorial *= i;
            }
            std::cout << "The Factorial of " << n << "=" << factorial << std::endl;

        }
        std::cout << "Press 'y' to enter another number, or x to close the program:";
        std::cin >> loop_input;

    }

    return 0;
}