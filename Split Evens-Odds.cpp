// Split Evens-Odds.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Split Evens-Odds.h"
//#include "unorderedLinkedList.h"
using namespace std;


// change so that we are re-routing the pointers from the original list and that list ends up being empty
void intLinkedList::splitEvensOddsList(intLinkedList& evensList,
	intLinkedList& oddsList)
{
	nodeType<int>* current = this->first;
	/*
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
	*/
	while (current != nullptr)
	{
		if (current->info %2 == 0)
		{
			if (evensList.count == 0)
			{
				evensList.first = current;
			}
			else
				evensList.last->link = current;

			evensList.last = current;
			evensList.count++;
			current = current->link;
			evensList.last->link = nullptr;
		}
		else
		{
			if (oddsList.count == 0)
			{
				oddsList.first = current;
			}
			else
				oddsList.last->link = current;

			oddsList.last = current;
			oddsList.count++;
			current = current->link;
			oddsList.last->link = nullptr;
		}
	}

	this->first = nullptr;
	this->last = nullptr;
	this->count = 0;
}
int main()
{
	intLinkedList evens;
	intLinkedList odds;
	intLinkedList test;
	/*
	test.insertLast(24);
	test.insertLast(22);
	test.insertLast(55);
	test.insertLast(77);
	test.insertLast(13);
	test.insertLast(829);
	test.insertLast(46);
	*/
	int lister[18] = { 34, 62, 21, 10, 15, 90, 66, 53, 7, 120, 88, 36, 90, 11, 17, 24, 10, -99 };
	for (int i = 0; i < 18; i++)
	{
		test.insertLast(lister[i]);
	}
	test.splitEvensOddsList(evens, odds);
	/*
	cout << "evens list" << endl;
	evens.print(); // do not use print function, use iterator
	cout << "\nodds list" << endl;
	odds.print();
	cout << "\noriginal list" << endl;
	test.print();
	*/
	cout << "----------Linked List iterators-----------" << endl << "evens: ";
	for (auto it = evens.begin(); it != evens.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
	cout << "odds: ";
	for (auto it = odds.begin(); it != odds.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}
