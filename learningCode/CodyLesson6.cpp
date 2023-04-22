#include <iostream>
#include "Global.h"

void printMenu()
{
    std::cout << "Select a lesson to run: \n";
    std::cout << "1: Lesson 1: Convert F into C \n";
    std::cout << "2: Lesson 2: Calculator \n";
    std::cout << "3: Lesson 3: Factorial \n";
    std::cout << "4: Lesson 4: Sort Array Least to Greatest \n";
    std::cout << "5: Lesson 5: Search Array \n";
    std::cout << "6: End \n";
}


void executeMenu(int choice) 
{
    switch (choice) 
    {
    case 1:
        Lesson1();
        break;
    case 2:
        CodyLesson2();
        break;
    case 3:
        CodyLesson3();
        break;
    case 4:
        CodyLesson4();
        break;
    case 5:
        ImaniLesson5();
        break;
    case 6:
        break;
    default:
        std::cout << "Invalid choice. Please try again. \n";
    }
}

int CodyLesson6() 
{
    int choice = 0;
    while (choice != 6) 
    {
        printMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 6) 
        {
            std::cout << "Exiting... \n";
            break;
        }

        executeMenu(choice);
    }

    return 0;
}