
#include<iostream>
using namespace std;

class Rectangle
{
	public:
		int l,b;
		Rectangle(int a, int c)
		{
			l = a;
			b = c;
		}
		void disp_area()
		{
			double s = (l*b);
			cout<< s <<endl;
		}
};

int main()
{
	Rectangle r(4,5);
	r.disp_area();
	return 0;
}
