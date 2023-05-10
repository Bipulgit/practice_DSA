#include<iostream>
#include<stack>
using namespace std;

class stack{
	public:
		int *arr;
		int top;
		int size;
		
	stack(int size) {
		this -> size = size;
		arr = new int [size];
		top = -1;
	}
	
	void push (int element) {
		if(size - top > 1) {
			top ++;
			arr[top] = element;
		}
		else{
			cout << "stack overflow"<<endl;
		}
	}
	void pop (){
		if(top >= 0){
			top--;
		}
		else{
			cout << "Stack underflow"<<endl;
		}
	}
	int peek(){
		if(top >= 0){
			return arr[top];
		}
		else
		{
			cout <<"Stack is Empty"<<endl;
		}
	}
	bool isEmpty(){
		if(top == -1){
			return true;
		}
		else{
			return false;
		}
	}
};

int main(){
	stack.st(5);
	
	st.push(12);
	st.push(34);
	st.push(55);
	st.push(5);
	st.push(3);
	
	cout << st.peek() <<endl;
}

