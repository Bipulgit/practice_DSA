
#include<iostream>
using namespace std;

int age(int x)
{
	if(x>=18){
		cout<<"Eligibal for vote: "<<endl;
	}
	else
	{
		cout<<"Not eligibal for vote: "<<endl;
	}
}

//using main function

int main()
{
	int x;
	cout<<"Enter your age: "<<endl;
	cin>>x;
	age(x);
	return 0;
}
