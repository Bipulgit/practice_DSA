
#include<iostream>
using namespace std;

//using class
class Volume
{
	int length;
	int breadth;
	public:
		Volume()
		{
			length = 7;
			breadth = 4;
		}
		int print_area()
		{
			return length * breadth;
		}
		
};

int main()
{
	Volume v;
	cout<<v.print_area()<<endl;
	return 0;
}
