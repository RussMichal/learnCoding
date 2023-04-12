// learningCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void print(std::string msg)
{
	std::cout << msg << std::endl;
}

void Lesson4()
{
	print("hello world");
	float num1 = 1.3f;
	float num2 = 1.1f;
	float num3 = 1.2f;
	const float pi = 3.141592;

	float max;


	//functions
	//multi files
		//headers and implementation files or .h and .cpp
		//compile?? 
	//pass by value pass by reference
		//pointers
	// calling convinions
	// defult arguments
	// commandline args  
//git




//functions
	// arguments
	// return types
	// const 
	//overloading

	//array of like 5 numbers init the array with loop to 5,4,3,2,1
	//print the array <- unsorted print
	//sort the array least to greatest <- hard
	//print the array <- sorted print
	//2-3 functions
}

float oldfirstNumm()
{
	float num1;
	std::cout << "Enter 1st number: ";
	std::cin >> num1;
	return num1;
}

char oldoperr()
{
	char op;
	std::cout << "Enter operator: +, -, , /: ";
	std::cin >> op;
	return op;
}

float oldsecondNumm()
{
	float num2;
	std::cout << "Enter 2nd number: ";
	std::cin >> num2;
	return num2;
}

void oldcalculatee(const float num1, const float num2, const char op);

int oldAlenaLesson22()
{

	char op;
	float num1, num2;

	num1 = oldfirstNumm();
	num2 = oldsecondNumm();
	op = oldoperr();

	oldcalculatee(num1, num2, op);

	oldcalculatee(num1, num1, op);

	oldcalculatee(num2, num2, op);

	return 0;
}

void oldcalculatee(const float num1, const float num2, const char op)
{
	//if ((num1 < 10) && (num2 > 10)) 
	{
		switch (op) {

		case '+'://1
			std::cout << "plus" << std::endl;
			std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
			break;

		case '-'://2
			std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
			break;

		case '*'://3
			std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
			break;

		case '/'://4
			std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
			break;
		case '%'://5
			std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
			break;

		}
	}
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
