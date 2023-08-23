
// A simple C++ program for traversal of a linked list
#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

void printlist(Node* n)
{
	while (n  != NULL) {
		cout<<n->data<<" ";
		n = n->next;
	}
}

int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	
	head = new Node();
	second = new Node();
	third = new Node();
	
	head->data = 4;
	head->next = second;
	second->data = 5;
	second->next = third;
	third->data = 6;
	third->next = NULL;
	
	printlist(head);
	return 0;
}
