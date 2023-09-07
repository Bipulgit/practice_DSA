
#include<iostream>
using namespace std;

int main()
{
	struct student
	{
		int roll;
		char name[30];
		int age;
		int marks;
	};
	
	struct student p1 = {1, "vipul",20,90};
	
	cout<<p1.roll<<" "<<p1.name<<" "<<p1.age<<" "<<p1.marks<<endl;
	return 0;
}
