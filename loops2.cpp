
#include<iostream>
using namespace std;
int main()
{
	int i,sum=0;
	cout<<"Find the sum first 10 natural number: "<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"The natural number are: \n"<<endl;
	
	//using LOOP's
	
	for(i = 1; i <= 10; i++)
	{
		cout<<i <<" ";
		sum=sum+i;
	}
	cout<<endl;
	cout<<"The sum of first 10 natural number: "<<sum<<endl;
}
