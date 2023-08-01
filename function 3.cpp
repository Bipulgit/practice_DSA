
#include<iostream>
using namespace std;

//using function

void evenorodd(int x)
{
	if(x % 2 == 0){
		cout<<"Even: "<<endl;
	}
	else
	{
		cout<<"Odd: "<<endl;
	}
}

//using another function

int main()
{
	int x;
	cout<<"Enter the value of X: "<<endl;
	cin>>x;
	evenorodd(x);
	return 0;
}
