
#include<iostream>
using namespace std;

   //using functiom

int sum(int a, int b)
{
	return a+b;
}

// using main function

int main()
{
	int a,b;
	cout<<"Enter product A: "<<endl;
	cin>>a;
	cout<<"Enter product B: "<<endl;
	cin>>b;
	cout<<"The product of two number: "<<sum(a,b)<<endl;
	return 0;
}

