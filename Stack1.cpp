#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack <int> s;
	//push operation
	s.push(9);
	s.push(8);
	s.push(7);
	
	//pop
	s.pop();

	//top element
	cout<<"Print top element: " <<s.top() <<endl;
	cout <<"Print size of stack: "<<s.size() <<endl;
	
	if(s.empty()){
		cout << "Stack is empty:"<<endl;
	}
	else{
		cout <<"stack is not empty:" <<endl;
	}
	return 0;
}
