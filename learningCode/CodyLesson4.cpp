#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

void Sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int CodyLesson4()
{
    const int size = 5;
    int arr[size] = { 5,3,4,2,1 };

    std::cout << "Unsorted Array : ";
    printArray(arr, size);

    Sort(arr, size);

    std::cout << "Sorted Array : ";
    printArray(arr, size);

    return 0;
}