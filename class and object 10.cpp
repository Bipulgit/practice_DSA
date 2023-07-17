
#include<iostream>
using namespace std;
//using class
class AddDistance
{
	private:
		int feet;
		int inch;
	public:
		void setDistance();
		void getDistance();
		AddDistance addDistance(AddDistance d);
};

//function to show print distance
void AddDistance::setDistance()
{
	cout<<"Feet: ";
	cin>>feet;
	cout<<"Inch: ";
	cin>>inch;
}
//function to get distance from user
void AddDistance::getDistance()
{
	cout<<"Feet: "<<feet;
	cout<<"Inch: "<<inch;
}
//function to add two distance

AddDistance AddDistance::addDistance(AddDistance d)
{
	AddDistance dist;
	
	dist.feet +d.feet;
	dist.inch +d.inch;
	
	if(dist.inch >= 12)
	{
		dist.feet++;
		dist.inch -= 12;
	}
	return dist;
}
//using main function
int main()
{
	AddDistance d1,d2,d3;
	
	cout<<"Enter length of Distance 1: "<<endl;
	d1.setDistance();
	
	cout<<"Enter length of Distance 2: "<<endl;
	d2.setDistance();
	
	d3 = d1.addDistance(d2);
	
	cout<<"Sum of Distance 1 and Distance 2: "<<endl;
	d3.getDistance();
	return 0;
}
