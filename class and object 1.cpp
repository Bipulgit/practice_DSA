
#include<iostream>
using namespace std;

class student
{
	public:
		string name;
		int roll_no;
		
};

int main()
{
	student s;
	s.name = "John";
	s.roll_no = 2;
	cout<<s.name <<endl <<" "<<s.roll_no <<endl;
	return 0;
}
