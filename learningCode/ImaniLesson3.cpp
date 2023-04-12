#include <iostream>

int ImaniLesson3()
{
    int count = 0;
    std::cout << "Find the factorial of : ";
    std::cin >> count;

    long long nums[100];
    nums[0] = 1;
    nums[1] = 1;

    for (int i = 2; i <= count; i++)
    {
        nums[i] = i * nums[i - 1];

    }
    for (int i = 0; i <= count; i++)
    {
        std::cout << "i: " << i << " =  " << nums[i] << "\n";
    }

    std::cout << "The factorial of " << count << " is : " << nums[count];
    return 0;
}