
#include<iostream>
using namespace std;

//using class 1
class Bank
{
	public:
		int getBalance()
		{
			return 0;
		}
};
//using class 2
class BankA : public Bank
{
	int amount;
	
	public:
		BankA(int a)
		{
			amount = a;
		}
		int getBalance()
		{
			return amount;
		}
};
//using class 3
class BankB : public Bank
{
	int amount;
	
	public:
		BankB(int a)
		{
			amount = a;
		}
		int getBalance()
		{
			return amount;
		}
};

//using class 4
class BankC : public Bank
{
	int amount;
	public:
		BankC(int a)
		{
			amount = a;
		}
		int getBalance()
		{
			return amount;
		}
};

//using main function
int main()
{
	BankA a(1000);
	BankB b(1500);
	BankC c(2000);
	cout<<a.getBalance()<<endl;
	cout<<b.getBalance()<<endl;
	cout<<c.getBalance()<<endl;
	return 0;
}










