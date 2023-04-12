#include <iostream>



void swap(int num1, int& num2)

{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}



void sort(int array[], int size)

{
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (array[j] > array[j + 1])
                swap(array[j], array[j + 1]);
}



void print(int array[])
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << array[i] <<" "<< std::endl;
    }
}





int AlenaLesson4()
{
    int array[5] = {1,2,5,3,4};

    for (int i = 0; i < 5; i++)
    {
       // array[i] = 5-i;
    }

    print(array);
    sort(array, 5);
    print(array);

    return 0;

}