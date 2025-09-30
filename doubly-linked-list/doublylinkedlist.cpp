#include "doublylinkedlist.h"
using namespace std; 

DoublyLinkedList::DoublyLinkedList()
{
	head = NULL;
	tail = NULL;
}
DoublyLinkedList::~DoublyLinkedList()
{
}
void DoublyLinkedList::addNewNodeToFront(Node* newNode) {
	if (head == NULL && tail == NULL) {
		head = tail = newNode;
	}
	else {
		head->prev = newNode;
		newNode->next = head;
		head = newNode;
	}
}
void DoublyLinkedList::addNewNodeToBack(Node* newNode) {
	if (head == NULL && tail == NULL) {
		head = tail = newNode;
	}
	else {
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;
	}
}
Node* DoublyLinkedList::removeNodeFromFront()
{
	if (head = NULL)
	{
		return NULL; 
	}

	Node* tempNode;
	tempNode = head;
	head = head->next;
	return tempNode;
}
void DoublyLinkedList::displayDoublyLinkedList()
{
	Node* tempNode;
	tempNode = head;
	while (tempNode != NULL)
	{
		cout << tempNode->value << " ";
		tempNode = tempNode->next;
	}
}
void DoublyLinkedList::drawDoublyLinkedList()
{

	Node* temp = head; 
	cout << "head -> " << endl; 

	while (temp != NULL)
	{
		cout << "Address: " << temp << " ,Previous: " << temp->prev << " Value: " << temp->value << " Next: " << temp->next << endl; 

		temp = temp->next; 
	}
		cout << " <- Tail " << endl; 
}

bool DoublyLinkedList::isPalindrome()
{
	if (head == NULL)
	{
		return true;
	}

	Node* left = head; 
	Node* right = tail;

	while (left != right && right->prev != left)
	{
		if (left->value != right->value)
		{
			return  false; 
		}
		left = left->next; 
		right = right->prev; 
	}
	return true; 
}
void DoublyLinkedList::split(int n) // n is the number of even partitions
{
	Node* current = head;
	int count = 0;
	while (current != NULL)
	{
		count++;
		current = current->next; // move to the next node
	}

	int partitionSize = count / n; // integer division

	int remainders = count % n; //handle the reminder nodes

	if (n < 1 || n > count || remainders != 0)
	{
		cout << "Cannot be processed" << endl;
		return;
	}


	current = head;

	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < partitionSize; j++) 
		{
			cout << current->value << " ";
			current = current->next;
		}
		cout << endl; // <-- after each group
	}

}
