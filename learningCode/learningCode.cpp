// learningCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <list>

#include <queue>
#include <stack>

#include <map>
#include <unordered_map>

int main(std::string arg)
{
	std::map<int, std::string> phonemap;

	phonemap[123456] = "russ";
	phonemap[1111] = "cody";
	phonemap[2222] = "imani";

	std::cout<<phonemap[1111]<<"\n";

	struct food
	{
		std::string name;
		float price;
		float weight;
		int cal;
	};

	std::map<std::string, food> foodmap;
	foodmap["chip"] = { "chip",0.0f,0.0f,0 };
	foodmap["nut"] = { "nut",2.0f,0.2f,2 };
	foodmap["water"] = { "water",3.0f,3.2f,3 };

	float cash = 10.0f;
	food item = foodmap["chip"];
	std::cout << item.name << "\n";
	std::cout << item.price << "\n";
	std::cout << item.weight << "\n";
	std::cout << item.cal << "\n";
	std::cout<<"remaining chash "<<cash - item.price << "\n";

	struct person
	{
		int phonenumber;
		std::string name;
	};

	person imani = { 1111,"imani" };
	person cody = { 222,"cody" };
	std::vector<person> vec;
	vec.push_back(imani);
	vec.push_back(cody);

	//change vinding machine to use a map for const look up time.
	//scan in an item to buy from keyboard
	//find item in map
	//print out item information
}