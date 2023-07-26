
#include<bits/stdc++.h>
using namespace std;

class node{
	public:
		int data;
		node* next;
};

void push(node** head_ref, int new_data)
{
	node* new_node = new node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void deletnode(node** head_ref, int key)
{
	node* temp = *head_ref;
	node* prev = NULL;
	
	if(temp != NULL && temp->data == key)
	{
		*head_ref = temp->next;
		delete temp;
		return;
	}
	else
	{
		while(temp != NULL && temp->data != key)
		{
			prev = temp;
			temp = temp->next;
		}
		if(temp == NULL)
		   return;
		   
		delete temp;
	}
}

void printlist(node* node)
{
	while(node != NULL)
	{
		cout<<node->data<<" ";
		node = node->next;
	}
}

int main()
{
	node* head = NULL;
	
	push(&head, 7);
	push(&head, 3);
	push(&head, 5);
	push(&head, 1);
	
	
	puts("Created Linked List: ");
	printlist(head);
	
	deletnode(&head, 5);
	puts("\nLinked List after Deletion of 1: ");
	printlist(head);
	
	return 0;
}
















