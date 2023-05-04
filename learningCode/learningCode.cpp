// learningCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<queue>
#include<stack>

int main(std::string arg)
{
	std::vector<int> vec;
	vec.reserve(20);
	for (int i = 0; i < 20; i++)
	{
		vec.push_back(i);
	}
	int cap = vec.capacity();
	int size = vec.size();

	std::vector<int> peopleInStore;
	peopleInStore.reserve(10);

	peopleInStore.push_back(20);
	peopleInStore.push_back(10);
	peopleInStore.push_back(100);
	peopleInStore.erase(peopleInStore.begin());

	std::queue<std::string> line;//FIFO
	line.push("tim");
	line.push("john");
	line.push("jim");
	line.push("bob");
	line.pop();
	line.pop();

	std::stack<int> Deck;//FILO
	Deck.push(1);
	Deck.push(2);
	Deck.push(3);
	Deck.pop();
	//data structures

	//loop until - num entered
	// add each num entered into a contianer
	// print all values in container
	// print avg of container	

	//vector, linked lists
	//all the rest
}