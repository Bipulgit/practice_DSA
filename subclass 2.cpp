
#include<iostream>
using namespace std;
//aprent class
class Rectangle
{
	private:
		int length,breadth;
	public:
		Rectangle(int l, int b)
		{
			length = l;
			breadth = b;
		}
		void print_area()
		{
			cout<<length*breadth <<endl;
		}
		void print_preameter()
		{
			cout<<2*(length+breadth)<<endl;
		}
};
//child class
class Square : public Rectangle
{
	public:
		Square(int side) : Rectangle(side,side){
		}
};
//using main function
int main()
{
	Rectangle r(4,5);
	Square s(4);
	r.print_area();
	r.print_preameter();
	s.print_area();
	s.print_preameter();
	return 0;
}
