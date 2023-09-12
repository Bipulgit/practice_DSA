
#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node* left;
	struct Node* right;
	
	Node(int val, int Null)
	{
		data = val;
		
		//Left and right child for node
		//Will be initialized to null
		left = Null;
		right = Null;
	}
};

int main()
{
	/*creatr root */
	struct Node* root = new Node(1);
	/* following is the tree after above statement
	
	              1
	             / \
	          Null Null
	*/
	root->left = new Node(2);
	root->right = new Node(3);
	
	root->left->left = new Node(4);
	
	return 0;
	
}

