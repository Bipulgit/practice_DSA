
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter your number: "<<endl;
	cin>>n;
	if(n%3==0){
		cout<<"Number is divisibal by 3"<<endl;
    }
	else if(n%5==0){
		cout<<"Number is divisibal by 5"<<endl;
	}else{
		cout<<"Not divisibal by 3 or 5"<<endl;
	}
	return 0;
}
