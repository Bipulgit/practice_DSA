
#include <iostream>
using namespace std;
int main()
{
	int length, breadth;
	
	cout<<"Enter length: "<<endl;
	cin>>length;
	cout<<"Enter breadth: "<<endl;
	cin>>breadth;
	
	//condition start hear
	
	if(length==breadth){
		cout<<"It is a square: "<<endl;
	}
	else
	{
		cout<<"It is a rectangle: "<<endl;
	}
	return 0;
}
