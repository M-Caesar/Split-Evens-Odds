#pragma once
#include "linkedList.h"
#include "unorderedLinkedList.h"
class intLinkedList : public unorderedLinkedList<int> {
public:
	void splitEvensOddsList(intLinkedList& evensList,
		intLinkedList& oddsList);
	// Function to rearrange the nodes of the linked list so
	// that evensList consists of even integers and oddsList
	// consists of odd integers.
	// Postcondition: evensList consists of even integers.
	// oddsList consists of odd integers.
	// The original list is empty.
	//
};