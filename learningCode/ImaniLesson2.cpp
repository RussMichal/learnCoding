// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int ImaniLesson2()
{
    float num1 = 0.1f;
    float num2 = 0.2f;
    char op = 'h';


    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    /*if ((num1 || num2) < 10.0f && (num1 || num2) > 10.0f)
    {
        cout << "One of the numbers is less than 10 \n";
        cout << "One of the number is greater than 10 \n";
    }
    else
    {
        cout << "Conditions not met. \n";
        return 0;
    }*/
    int myInt=4;
    if ((num1 || num2) < 10.0f)
    {
        
        cout << "First Condition met \n";
        if ((num1 || num2) > 10.0f)
        {
            cout << "Second condition met \n ";
        }
        else
        {
            cout << "Second condition not met: Exit Code \n";
            return 0;
        }
        myInt = myInt + 1;//5
    }
    else
    {

        cout << "Operating conditions not met: Exit Code \n";
        return 0;
    }

    myInt = myInt + 1;//6

    cout << "Enter an operator (-,+,*,/): ";
    cin >> op;

    switch (op)
    {
    case '-':
        cout << "The difference between these two numbers is: " << num1 - num2 << "\n";
        break;
    case '+':
        cout << "The addition between these two numbers is: " << num1 + num2 << "\n";
        break;
    case '*':
        cout << "The multiplication of these two numbers is: " << num1 * num2 << "\n";
        break;
    case '/':
        cout << "The division between these two numbers is: " << num1 / num2 << "\n";
        break;
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
