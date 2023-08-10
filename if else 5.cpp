
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the age of A: "<<endl;
	cin>>a;
	cout<<"Enetr the age of B: "<<endl;
	cin>>b;
	cout<<"Enter the age of C: "<<endl;
	cin>>c;
	
	//condition start hear 
	
	if(a > b){
		cout<<"a is youngest to b: "<<endl;
	}
	else if(b>c){
		cout<<"b is youngest to c: "<<endl;
	}
	else{
		cout<<"c is youngest to a: "<<endl;
		
	}
	return 0;
}
