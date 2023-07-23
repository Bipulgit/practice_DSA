
#include<iostream>
using namespace std;

//using class

class Area
{
	public:
		static void print_area(int l, int b)
		{
			cout<<l*b<<endl;
		}
		
		static void print_area(int s)
		{
			cout<<s*s<<endl;
		}
};

//using main function
int main()
{
	Area::print_area(7);
	Area::print_area(3,4);
	return 0;
}
