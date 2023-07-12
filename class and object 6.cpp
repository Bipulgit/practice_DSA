
/*C++ program to create multipal objects of a class*/

#include<iostream>
#include<string>
using namespace std;

//Class definition
//"student" is a class

class Student {
	
	public:
		int rollno;
		string stdname;
		float perc;
	
};

//main function

int main()
{
	//multiple object creation
	Student std1, std2;
	
	//Accessing attributes and setting the values
	std1.rollno = 101;
	std1.stdname = "Vipul kumar";
	std1.perc = 98.34;
	
	std2.rollno = 102;
	std2.stdname = "Vipul kuamr 2";
	std2.perc = 99.90;
	
	//printting the values
	
	cout<<"student 1........." 
	<<endl;
	cout<<"Student Roll no: "<<std1.rollno<<endl;
	cout<<"Student Name: "<<std1.stdname<<endl;
	cout<<"Student Percentage: "<<std1.perc<<endl;
	
	//student 2
	
	cout<<"Student 2..................."
	<<endl;
	cout<<"Student Roll No: "<<std2.rollno<<endl;
	cout<<"Student Name: "<<std2.stdname<<endl;
	cout<<"Student Percentage: "<<std2.perc<<endl;
	return 0;
}
	

