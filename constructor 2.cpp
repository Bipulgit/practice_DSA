
#include<iostream>
using namespace std;

//using class

class AddAmount
{
	int amount;
	
	public:
		AddAmount()
		{
			amount = 50;
		}
		AddAmount(int a)
		{
			amount = 50;
			amount = a + amount;
		}
		
		void print_amount()
		{
			cout<<amount<<endl;
		}
};
//using main function

int main()
{
	AddAmount a1;
	AddAmount a2(15);
	a1.print_amount();
	a2.print_amount();
	return 0;
}
