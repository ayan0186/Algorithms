// University of Arkansas at Little Rock
// Department of Computer Science
// CPSI 28003 - 01 and 9S1: Algorithms
// Fall 2025
// Project 1: Doubly Linked List
// Due Date: September 30, 2025, 10:50 AM, Tuesday
// Name: Ayan Huda
// Student-ID (Last 4 Digits)
// Workday ID: 3207 (Last 4 Digits)
// T-Number: T00703064
// Description of the Program (2-3 sentences): This program implements a doubly linked list with multiple functions such as adding nodes, removing nodes, displaying the list and much more. 
// The point of this project is to show the various methods that doubly linked lists can do. 
// Date Written: 9/25/2025
// Date Revised 9/29/2025
#include <iostream>
using namespace std;
#include "Node.h"
#include "doublylinkedlist.h"
int main()
{
	// test case 1
	// Create a doubly linked list
	DoublyLinkedList* Dll_1;
	Dll_1 = new DoublyLinkedList;
	// Each node contains only one integer of a string
	Node n11(1);
	Node n12(2);
	Node n13(3);
	Node n14(4);
	Node n15(5);
	Node n16(6);
	// a doubly linked list of integers by inserting nodes
	Dll_1->addNewNodeToBack(&n11);
	Dll_1->addNewNodeToBack(&n12);
	Dll_1->addNewNodeToBack(&n13);
	Dll_1->addNewNodeToBack(&n14);
	Dll_1->addNewNodeToBack(&n15);
	Dll_1->addNewNodeToBack(&n16);
	Dll_1->split(3);
	system("PAUSE");
	return 0;
}
