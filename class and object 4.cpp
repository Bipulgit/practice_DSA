
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

//using class

class triangle
{
	public:
	int s1,s2,s3;
	triangle(int a,int b, int c)
	{
		s1 = a;
		s2 = b;
		s3 = c;
	}
	void print_area()
	{
		double s = (s1+s2+s3)/2;
		cout<<"Area of triangle: "<<s<<endl;
		cout<<"Perimeter is: "<< (s1+s2+s3)<<endl;
	}
};

int main()
{
	triangle t(3,4,5);
	t.print_area();
	return 0;
}


