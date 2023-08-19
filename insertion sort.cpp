
#include<iostream>
using namespace std;

int main()
{
	int A;
	int arr[A];
	for(int i=0; i<A; i++)
	{
		cin>>arr[i];
	}
	
	for(int i=1; i<A;i++) {
		int current = arr[i];
		int j=i-1;
		while(arr[j]>current && j>=0){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=current;
	}
	for(int i=0;i<A;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
