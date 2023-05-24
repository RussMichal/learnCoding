#include <iostream>
#include <vector>
#include <list>

#include <queue>
#include <stack>

int structFunc(std::string arg)
{
	struct person
	{
		std::string name;
		int salary;
		bool rich;
	};

	int age = 0;
	person employee;
	person employee2;
	person employee3 = { "russ",69,true };

	employee.name = "imani";
	employee.salary = 3;
	employee.rich = true;

	employee2.name = "cody";
	employee2.salary = 999999;
	employee2.rich = false;

	std::vector<person> contianer;

	contianer.push_back(employee);
	contianer.push_back(employee2);

	for (int i = 0; i < contianer.size(); i++)
	{
		std::cout << "name: " << contianer[i].name << "\n";
		std::cout << "salary: " << contianer[i].salary << "\n";
		std::cout << "rich: " << contianer[i].rich << "\n";
	}

	//vending machine vector<struct>
	//user buys items from machine
	return 0;
}