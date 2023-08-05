
#include<iostream>
using namespace std;

int main()
{
	int classheld,classattend,percentage,total;  /* this program is wrong*/
	cout<<"Enter the total classheld: "<<endl;
	cin>>classheld;
	cout<<"Enter total classattend: "<<endl;/*A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.*/
	cin>>classattend;
	
	//condition start
	total=classattend+classheld;
	cout<<"Total class: "<<total<<endl;
	
	percentage=classattend/classheld*100;
	
	cout<<"Total percentage of class: "<<percentage<<endl;
	
	if(percentage<=75){
		cout<<"Student able to sit in exam: "<<endl;
	}
	else
	{
		cout<<"Student not able to sit in exam: "<<endl;
	}
	return 0;
}
