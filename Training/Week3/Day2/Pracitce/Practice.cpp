#include <iostream>
using namespace std;

struct Node
{
	int value;
	Node* next;
};
void Search(Node*& head)
{
	int data;
	cout << "Enter element to be found ";
	cin >> data;

	Node* temp = head;
	int count = 0;
	while (temp != NULL)
	{
		if (temp->value == data)
		{
			count++;
		}
	
		temp=temp->next;
	}
	if (count == 1)
	{
		cout << "Element Found ";
	}
	else
	{
		cout << "Element Not Found";
	}
}


void deletefirstNode(Node*& head)
{
	Node* temp = head;
	head = temp->next;
	
	delete(temp);
}
void deleteLastNode(Node*& head)
{
	Node* temp = head;
	while (temp->next->next!=NULL)
	{
		temp = temp->next;
	}
	Node* last = temp->next;
	temp->next=NULL;
	delete(last);
}
void insertIntoLL(Node*& head, int data) 
{
	Node* newNode = new Node(); 

	newNode->value = data;
	newNode->next = head; 
	head = newNode; 
}
void printList(Node*& head)
{
	struct Node* temp = head;
	while (temp != NULL)
	{
		cout << temp->value << " ";
		temp = temp->next;
	}
}

int main() // Added more operations
{
	int  len;
	cout << "Enter the legth of Linked List : \n";
	cin >> len;


	int val;
	struct Node* head = NULL;
	for (size_t i = 0; i < len; i++)
	{
		cin >> val;
		insertIntoLL(head, val);
	}
	deletefirstNode(head);
	deleteLastNode(head);
	printList(head);
	Search(head);
}


