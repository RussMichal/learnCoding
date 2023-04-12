#include <iostream>

void generate(int randArr[], int size);

void find(int randArr[], int size, int var);

int ImaniLesson5()
{

    int size = 50;
    int randomTime[50] = { 0 };
    generate(randomTime, size);

    int num = 0;
    std::cout << "\nPlease Enter an integer value: ";
    std::cin >> num;

    find(randomTime, size, num);

    return 0;
}

void generate(int randArr[], int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        randArr[i] = rand();
        std::cout << randArr[i] << "\n";
    }
}

void find(int randArr[], int size, int var)
{
    for (int i = 0; i < size; i++)
    {//1,1,1,1,1,2,2,2,2,2
        if (var == randArr[i])
        {
            std::cout << "Yes Number Found";
            return;
        }
    }
    std::cout << "\nNumber Not Found";
}
