
#include<iostream>
using namespace std;

class Vehical
{
	private:
		double milage;
		double price;
};

class car: public Vehical
{
	private:
		double ownershipCost;
		int warranty;
		int seatingcapacity;
		string fueltype;
};
class Bike: public Vehical
{
	private:
		int numberofCylinder;
		int numberofGears;
		string coolingType;
};

