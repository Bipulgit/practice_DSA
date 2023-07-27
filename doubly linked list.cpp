
#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *prev;
	struct node *next;
};

struct node* head = NULL;
void insert(int newdata) {
	struct node* newnode = (struct node*) malloc(sizeof(struct node));
	newnode->data = newdata;
	newnode->prev = NULL;
	newnode->next = head;
	
	if(head != NULL)
	head->prev = newnode;
	head = newnode;
}
void display(){
	struct node* ptr;
	ptr = head;
	while(ptr != NULL){
		cout<<ptr->data<<" ";
		ptr = ptr->next;
	}
}

int main()
{
	insert(3);
	insert(1);
	insert(2);
	insert(6);
	insert(4);
	insert(5);
	insert(9);
	insert(8);
	insert(36);
	cout<<"This doubly linked list is: ";
	display();
	return 0;
}
