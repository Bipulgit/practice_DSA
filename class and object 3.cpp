
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class triangle
{
	public:
		void print_area(int s1, int s2, int s3)
		{
			double s = (s1+s2+s3)/2;
			cout<<s<<endl;
			cout<<"Perimeter is: "<<(s1+s2+s3) << endl;
		}
};

int main()
{
	triangle t;
	t.print_area(3,4,5);
	return 0;
}

