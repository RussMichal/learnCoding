#include <iostream>

int CodyLesson3()
{
    int num=0;
    while (num!=-1)
    {
        std::cin >> num;
        int nums[15] = { 0 };
        nums[0] = 1;
        std::cout << 0 << "! = " << nums[0] << "\n";

        for (int i = 1; i < num; i++)
        {
            nums[i] = i * nums[i - 1];
            std::cout << i << "! = " << nums[i] << "\n";
        }
    }
    return 0;
}