#include <iostream>

int Lesson2()
{
	//binary
	//more data type
	bool;//1byte; true not 0 or false=0
	long l;//8 byte
	int i;//4 byte
	short s;//2 byte

	float f = 1.0f;//4 byte
	double d = 1.0;//8 byte

	char c = 'a';//1byte

	//ifs
	bool paino = false;
	bool clarinet = true;
	//T&&T = T
	//T&&F = F
	//F&&T = F
	//F&&F = F

	//T||T = T
	//T||F = T
	//F||T = T
	//F||F = F
	if (paino || clarinet)
	{
		std::cout << "I play both\n";
	}
	else if (paino)
	{
		std::cout << "I play paino\n";
	}
	else if (clarinet)
	{
		std::cout << "I play clarinet\n";
	}
	else
	{
		std::cout << "I play none\n";
	}

	int age = 4;
	//switch
	switch (age)
	{
	case 1:
		std::cout << "age 1\n";
	case 2:
		std::cout << "age 2\n";
		break;
	case 3:
		std::cout << "age 3\n";
		break;
	case 4:
		std::cout << "age 4\n";
		break;
	}

	std::cout << "end\n";

	//tax app example
	std::cout << "whats your income:";
	int income = 0;
	std::cin >> income;

	float taxRate;
	taxRate = 1.0f;

	switch (income)
	{
	case 20000:
		taxRate = 0.0f;
		break;
	case 50000:
		taxRate = 0.1f;
		break;
	case 100000:
		taxRate = 0.2f;
		break;
	}

	if (income <= 20000)
	{
		taxRate = 0.0f;
		std::cout << "taxRate set to 0\n";
	}
	else if (income > 20000 && income <= 50000)
	{
		taxRate = 0.1f;
		std::cout << "taxRate set to 0.1\n";
	}
	else if (income > 50000 && income <= 100000)
	{
		taxRate = 0.2f;
		std::cout << "taxRate set to 0.2\n";
	}
	else
	{
		taxRate = 0.3f;
		std::cout << "taxRate set to 0.3\n";
	}

	float tax = income * taxRate;
	std::cout << "taxRate: " << taxRate << "\n";
	std::cout << "tax: " << tax << "\n";
	return 0;
	//home work calculator
	//take a number
	//take a operation (-,+,*,/)
	//take another number
	//do the operation on the numbers

	//one number must be less than 10
	//other number must be greater then 10
	//if thats not true then exit

}