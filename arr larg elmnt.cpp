#include <iostream>
using namespace std;

void three_largest(int arr[], int arr_size)
{
	int i, first, second, third;
	
	if (arr_size < 3)
	{
		cout << "Invalid Input";
	}
	third = first = second = INT_MIN;
	for (i = 0; i < arr_size; i++)
	{
		if(arr[i] > first)
		{
			third = second;
			second = first;
			first = arr[i];
		}
		else if (arr[i] > second)
		{
			third = second;
			second = arr[i];
		}
		else if(arr[i] > third){
			third = arr[i];
		}
	}
	cout <<"\nThree Largest elements are : "<<first <<", "<<second <<", "<<third;
	
}

int main()
{
	int nums[] = {1,2,3,4,5,6,7,8};
	int n =sizeof(nums)/sizeof(nums[0]);
	cout <<"Original array: ";
	for(int i=0; i<n;i++)
	cout<<nums[i] <<" ";
	three_largest(nums, n);
	return 0;
}







