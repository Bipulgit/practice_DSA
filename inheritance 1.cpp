
#include<iostream>
using namespace std;

//first class

class Mammals
{
	public:
		void fn1() {
			cout<<"I am Mammal: "<<endl;
		}
};

//second class

class Marine_Animal
{
	public:
		void fn2() {
			cout <<"I am a Marine Animal: "<<endl;
		}
};

// inheritance

class BlueWhale : public Mammals, public Marine_Animal {
	public:
		void fn3() {
			cout << "I belong to the both categories : Mammals as well as Marine Animal "<<endl;
			
		}
};

//main function

int main()
{
	Mammals mm;
	Marine_Animal ma;
	BlueWhale bw;
	mm.fn1();
	ma.fn2();
	bw.fn3();
	bw.fn1();
	bw.fn2();
	return 0;
}
