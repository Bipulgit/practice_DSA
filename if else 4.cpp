
#include<iostream>
using namespace std;

int main()
{
	int marks;
	cout<<"Enter marks of Student: "<<endl;
	cin>>marks;
	
	//condition start hear
	
	if(marks < 25){
		cout<<"Grade F: "<<endl;
	}
	else if(marks >=25 && marks<45)
	{
		cout<<"Grade E: "<<endl;
	}
	else if(marks >=45 && marks<50)
	{
		cout<<"Grade D: "<<endl;
	}
	else if(marks>=50 && marks<60)
	{
		cout<<"Grade C: "<<endl;
	}
	else if(marks>=60 && marks<80)
	{
		cout<<"Graade B: "<<endl;
	}
	else if(marks>=80 && marks<100)
	{
		cout<<"Grade A: "<<endl;
	}
	else
	{
		cout<<"Invalide marks: "<<endl;
	}
	return 0;
}
