// learningCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int Lesson3()
{
    // scope

    //for
    int count = 10;
    while (count < 10)
    {
        std::cout << "count " << count << "\n";
        count = count + 1;
    }
    do
    {
        std::cout << "count " << count << "\n";
        count = count + 1;
    } while (count < 10);
    for (int count = 0; count < 10; count = count + 1)
    {
        std::cout << "count " << count << "\n";
    }
    for (int i = 10; i > 0; i = i - 1)
    {
        std::cout << "i " << i << "\n";
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << "i " << i << "\n";
    }

    //arrays
    int numb1;
    int numb2;
    int numb3;
    //...
    int num100;

    //int total = num1 + num2 + num3 + ... + num100;
    //total = total / 100;

    int numbers[100] = { 0 };
    int total = 0;
    for (int i = 0; i < 100; i++)
    {
        numbers[i] = i;
        total = total + numbers[i];
        std::cout << "i " << i << " nums[i] " << numbers[i] << " total " << total << "\n";
    }
    float avg = total / 100;
    std::cout << "avg " << avg << " total " << total;

    //example phiminachi series
    //0,1
    //0,1,1,2,3,5,8,13,21,...
    long long nums[100];
    nums[0] = 0;
    nums[1] = 1;
    for (int i = 2; i < 100; i++)
    {
        nums[i] = nums[i - 1] + nums[i - 2];
    }
    for (int i = 0; i < 100; i++)
    {
        std::cout << "i " << nums[i] << "\n";
    }

    //mathamical convolution
    //https://www.youtube.com/watch?v=KuXjwB4LzSA

    //5!
    // 1*2*3*4*5
    //10!
    //1*2*3*4*5*6*7*8*9*10

    
    //1
    //1*2
    //2*3
    //6*4
    //24*5
    //...
    //X*10

    //loop until done (-num)
    return 0;
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
