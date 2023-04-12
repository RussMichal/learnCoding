#include <iostream>

void lesson5()
{
	int value;
	std::cin >> value;

	srand(2);
	int random = rand();

	srand(time(NULL));
	int randomTime[50];

	for (int i = 0; i < 50; i++)
	{
		randomTime[i] = rand();
	}

	int i = 4;
	int* ptr = &i;
	*ptr = 2;

	int j = 5;
	int& ref = j;
	ref = 2;


	//pass by value pass by reference
		//pointers
	// calling convinions
	// defult arguments
	// commandline args  
	// random

	//make array random
	//get number from keyboard
	//search array for number
	//print yes number found or no number not found in array
}