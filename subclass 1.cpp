
#include<iostream>
using namespace std;
//paretnt class
class parent
{
	public:
	
	
	
	void parent_print()
	{
		cout<<"This is parent class: "<<endl;
	}
		
};
//child class
class child: public parent
{
	public:
		void child_print()
		{
			cout<<"This is child class: "<<endl;
		}
};
//main function
int main()
{
	parent p;
	child c;
	p.parent_print();
	c.child_print();
	c.parent_print();
	return 0;
}
