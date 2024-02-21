// Split Evens-Odds.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Split Evens-Odds.h"
#include "unorderedLinkedList.h"
using namespace std;


// change so that we are re-routing the pointers from the original list and that list ends up being empty
void intLinkedList::splitEvensOddsList(intLinkedList& evensList,
	intLinkedList& oddsList)
{
	nodeType<int>* current = first;

	//change the if and else statements so that they empty the original list as well
	while (current != nullptr)
	{
		nodeType<int>* nextNode = current->link;

		if (current->info % 2 == 0)
		{
			evensList.insertLast(current->info);
		}
		else
		{
			oddsList.insertLast(current->info);
		}

		delete current;
		current = nextNode;
	}
	first = nullptr;
}
//I am editing this from my phone
int main()
{
	intLinkedList evens;
	intLinkedList odds;
	intLinkedList test;
	test.insertLast(22);
	test.insertLast(55);
	test.insertLast(77);
	test.insertLast(13);
	test.insertLast(829);
	test.insertLast(46);
	test.splitEvensOddsList(evens, odds);
	cout << "evens list" << endl;
	evens.print(); // do not use print function, use iterator
	cout << "\nodds list" << endl;
	odds.print();
}
