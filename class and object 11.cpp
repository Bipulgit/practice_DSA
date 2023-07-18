
#include<iostream>
using namespace std;

//using class
class Employee
{                 //not solved
	string name;
	float salary;
	int workhours;
	
	public:
		
		
		void get_info();
		
		
};

void Employee::get_info()
{
	cout<<"Enter your name: "<<endl;
	cin>>name;
	cout<<"Enter your salary: "<<endl;
	cin>>salary;
	cout<<"Enetr your work hour: "<<endl;
	cin>>workhours;
}
//using main function
int main()
{
	Employee e();
	e.get_info();
	return 0;
}
