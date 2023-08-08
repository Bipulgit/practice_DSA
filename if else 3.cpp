
#include<iostream>
using namespace std;

int main()
{
	int quentity,price;
	cout<<"Enter quentity: "<<endl;
	cin>>quentity;
	price = quentity*100;
	
	//condition start hear
	
	if(price>1000){
		cout<<"Total cost is: "<<price-(price*1)<<endl;
	}
	else{
		cout<<"Total coast is: "<<price<<endl;
	}
	return 0;
}
