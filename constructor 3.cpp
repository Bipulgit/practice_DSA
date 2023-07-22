
#include<iostream>
using namespace std;

//using class

class PrintNumber
{
	public:
		static void printn(int n)
		{
			cout<<n<<endl;
		}
		static void printn(float n)
		{
			cout<<n<<endl;
		}
		static void printn(double n)
		{
			cout<<n<<endl;
		}
};
//using main function
int main()
{
	PrintNumber::printn(7);
	PrintNumber::printn(44.343);
	PrintNumber::printn(4.22);
	return 0;
}
