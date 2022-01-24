#include <iostream>
using namespace std;

struct Node
{
	int value;
	Node *next;
};

void insertIntoLL(Node *&head,int data) //Insertion of the node at the head 
{
	 Node *newNode = new Node(); //Creating a new node
	
	newNode->value = data; 
	newNode->next = head; //Adding Next Node value in the new created node
	head = newNode; //In head address value to newNode Address
}
int main()
{
	int  len;
	cout << "Enter the legth of Linked List\n";
	cin >> len;

	
	int val;
	struct Node* head = NULL; //Creation of the head node
	for (size_t i = 0; i < len; i++)
	{
		cin >> val;
		insertIntoLL(head, val); 
	}
	
	struct Node* temp = head; 
	while (temp != NULL)
	{
		cout << temp->value << " " ;
		temp = temp->next;
	}

}


