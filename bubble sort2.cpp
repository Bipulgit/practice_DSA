
#include<iostream>
using namespace std;
int main(){
	int n=9;
	int arr[9]={13,11,74,37,85,39,22,56,25};
	for(int i=0;i<n-1;i++){
		for(int j =0;j<n-1;j++){
			if(arr[j+1]<arr[j]){
				swap(arr[j+1],arr[j]);
			}
		}
	}
	
	for(int i=0; i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
