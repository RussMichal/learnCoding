#include <iostream>

bool find(int random_numbers[], int size, int number_to_search)
{
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (random_numbers[i] == number_to_search)
        {
            found = true;
            break;
        }
    }
    return found;
}

int AlenaLesson5()
{
    const int SIZE = 10;
    int random_numbers[SIZE];
    int number_to_search;

    srand(time(NULL));

    for (int i = 0; i < SIZE; i++) 
    {
        random_numbers[i] = rand() % 10 + 1;
    }

    std::cout << "Enter a number between 1-10 to search for within the array: ";
    std::cin >> number_to_search;



    if (find(random_numbers, SIZE, number_to_search))
    {
        std::cout << "The number " << number_to_search << " is in the array." << std::endl;
    }
    else
    {
        std::cout << "The number " << number_to_search << " is not in the array." << std::endl;
    }

    return 0;
}