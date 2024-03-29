
#include<iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
int partition(int arr[], int l, int r)
{
	int pivot = arr[r];
	int i = 1-1;
	
	for(int j = 1; j < r; j++)
	{
		if (arr[j] < pivot) {
			i++;
			swap(arr,i,j);
		}
	}
	swap(arr,i+1,r);
	return i + 1;
}
void quicksort(int arr[], int l, int r)
{
	if(l<r){
		int pi = partition (arr, 1, r);
		quicksort(arr,l,pi-1);
		quicksort(arr,pi+1,r);
	}
}
