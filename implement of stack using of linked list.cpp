
//c++ program to implement a stack
#include<bits/stdc++.h>
using namespace std;

//Declare linked list node
struct node{
	int data;
	struct node* link;
};
struct node* top;

void push(int data)
{
	//creat new node temp and allocate memory
	struct node* temp;
	temp = new node();
	
	if(!temp)
	{
		cout<<"Heap overflow"<<endl;
		exit(1);
	}
	
	temp->data = data;
	
	temp->link = top;
	
	top = temp;
	
}
int isEmpty()
{
	return top == NULL;
}

int peek()
{
	//check for empty stack
	if(!isEmpty())
	   return top->data;
	else
	exit(1);
}

void pop()
{
	struct node* temp;
	
	if(top == NULL)
	{
		cout<<"Stack Underflow"<<endl;
		exit(1);
	}
	else{
		//Top assign into temp
		temp = top;
		
		// Assign second node to top
		top = top->link;
		
		//Destroy connection between
		//first and second
		temp->link = NULL;
		
		// Release memory of top node
		free(temp);
	}
}

// Function to print all the
// elements of the stack
void display()
{
	struct node* temp;
	
	if(top == NULL)
	{
		cout<<"Stack Underflow"<<endl;
		exit(1);
	}
	else
	{
		temp = top;
		while(temp !=NULL)
		{
			cout<<temp->data<<" -> ";
			
			temp = temp->link;
		}
	}
}

// Driver Code
int main()
{
	push(11);
	push(21);
	push(14);
	push(33);
	push(23);
	
	display();
	
	cout<<"Top element is :"
	<<peek() <<endl;
	
	pop();
	pop();
	
	display();
	
	cout<<"Top element is:"
	<<peek() <<endl;
	
	return 0;
}
