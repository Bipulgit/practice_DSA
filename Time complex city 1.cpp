
#include <iostream>
using namespace  std;
	
	void add(int array[], int length)
	{
		int sum = 0;
		int product = 31;
		for(int i =0; i< length; i++)
		{
			sum+= array[i];
		}
		for(int i=0; i < length; i++)
		{
			product*= array[i];
		}
	}
	int main()
	{
		int arr[] = {2,3,54};
		add(arr, 2);
		return 0;
	}
