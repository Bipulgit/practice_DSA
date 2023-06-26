
#include<iostream>
using namespace std;

int main()
{
	int a[10];
	for(int i=0; i<10; i++)
	{
		cout<<"Enter a number: "<<endl;
		cin>>a[i];
	}
	
	cout<<"Number are: "<<endl;
	for(int i=0; i<10; i++)
	{
		cout<<a[i] <<"\n";
	}
	return 0;
}
