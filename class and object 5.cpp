
#include<iostream>
using namespace std;

//class and object

class Hello
{
	public:
		void sayHello()
		{
			cout<<"Hello World"<<endl;
		}
};

//main function

int main()
{
	Hello h;
	
	h.sayHello();
	
	return 0;
}
