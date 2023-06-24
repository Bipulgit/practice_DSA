
#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
};
void push(Node** head_ref, int new_data)
{
	Node* new_node = new Node();
	
	new_node->data= new_data;
	
	new_node->next=(*head_ref);
	
	(*head_ref) = new_node;
	
};
int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	Node* four = NULL;
	Node* five = NULL;
	
	head = new Node();
	second = new Node();
	third = new Node();
	four = new Node();
	five = new Node();
	
	head->data = 1;
	head->next = second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = four;
	
	four->data = 4;
	four->next = five;
	
	five->data = 5;
	five->next = NULL;
	
	return 0 ;
}
