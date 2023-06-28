
#include<iostream>
using namespace std;
      //main function
int main()
{
	int a[20];
	int pos = 0;
	int neg = 0;
	int odd = 0;
	int even = 0;
	int zero = 0;
	
	//using loop
	
	for(int i=0; i<20; i++)
	{
		cout<<"Enter a number: "<<endl;
		cin>>a[i];
		
		    // using if else
		    
		if(a[20]>0)
		   pos++;
		else if(a[20<0])
		   neg--;
		else
		   zero++;
		if(a[i]%2==0)
		   even;
		else
		   odd;
	}
	cout<<"Positive: "<<pos<<endl;
	cout<<"Negative: "<<neg<<endl;
	cout<<"Zero: "<<zero<<endl;
	cout<<"Odd: "<<odd<<endl;
	cout<<"Even: "<<even<<endl;
	return 0;
	
	
}
	



