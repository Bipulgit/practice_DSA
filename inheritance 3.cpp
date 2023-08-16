
#include<iostream>
using namespace std;
//using class 1
class Shape
{
	public:
		Shape()
		{
		}
		virtual void print()
		{
			cout<<"This is a shape: "<<endl;
		}
};
//using class 2
class polygon: public Shape
{
	public:
		polygen () {
		}
		void print ()
		{
			cout<<"Polygon is shape: "<<endl;
		}
};
//using class 3
class Rectangle: public polygon
{
	public:
		Rectangle() {
		}
		void print()
		{
			cout<<"Rectangle is a polygon: "<<endl;
		}
};
//using class 4
class Triangle: public polygon
{
	public:
		Triangle() {
		}
		void print()
		{
			cout<<"Triangle is a polygon: "<<endl;
		}
};
//using class 5
class Square: public Rectangle
{
	public:
		Square(){
		}
		void print()
		{
			cout<<"Square is a rectangle: "<<endl;
		}
};
//using main function
int main()
{
	Shape S;
	polygon P;
	Rectangle R;
	Triangle T;
	Square Sq;
	
	S.print();
	P.print();
	R.print();
	T.print();
	Sq.print();
	
	return 0;
}
