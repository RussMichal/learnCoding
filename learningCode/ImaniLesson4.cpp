#include <iostream>

using namespace std;

void PrintArray(int arr[], int size, std::string header="Unsorted array: ")
{
	std::cout << header <<"!" << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}

void sortt(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{

			if (arr[j] < arr[i])
			{
				int temp = arr[i];

				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int min(int i1, int i2)
{
	if (i1 < i2)
		return i1;
	return i2;
}

int ImaniLesson4()
{
	int arr[8] = { 12,3,1,5,18,10,7,35 };

	PrintArray(arr,8);

	sortt(arr,8);

	PrintArray(arr, 8, "Sorted elements: ");
	int minValue = min(2, 3);
	return 0;
}