
#include<iostream>
using namespace std;

// first class

class Apple
{
	public:
		int apple;
		Apple() {
			cout<<"No. of Apple: "<<endl;
			cin>>apple;
		}
		
};

//second class

class Mango
{
	public:
		int mango;
		Mango()
		{
			cout<<"No. of Mango: "<<endl;
			cin>>mango;
		}
};

//inheritance

class fruit : public Apple, public Mango {
	public:
		int fruits;
		void cal_no_of_fruit()
		{
			fruits = apple + mango;
			cout<<fruits;
		}
		void disp()
		{
			cout<<"No. of fruit are: "<<endl;
		}
};

//main function

int main()
{
	fruit f;
	f.disp();
	f.cal_no_of_fruit();
	
	return 0;
}
