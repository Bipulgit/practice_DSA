
#include<iostream>
using namespace std;

int main()
{
	int a[10];   //access array 
	
	//loop
	
	for(int i; i<10; i++)
	{
		cout<<"Enter a number: "<<endl;
		cin>>a[i];
	}
	
	cout<<"Number are: "<<endl;
	for(int i; i<10; i++)
	{
		cout<<a[i] <<endl;
	}
	return 0;
}
