
#include<iostream>
#include<iostream>
using namespace std;

//using class

class Student
{
	string name;
	
	public:
		Student(string s)
		{
			name = s;
			
		}
		Student()
		{
			name = "Unknow";
		}
		void print_name()
		{
			cout<<name<<endl;
		}
};

//using main function

int main()
{
	Student s1("John");
	Student s2;
	s1.print_name();
	s2.print_name();
	return 0;
}
