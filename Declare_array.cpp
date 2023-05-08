#include<iostream>
using namespace std;

int main(){
	int arr[10] = {11,41,62,53,84,65,16,67,48,39};
	cout << arr[6] <<endl;
	
	int third_array[15] = {2,7};
	int n = 15;
	int i = 15;
	cout<< "Print the array" << endl;
	for(i =0; i<n; i++){
		cout << third_array[i] <<" ";
	}
	
	int fourth_array[10] = {0};
	int a = 10;
	int j = 10;
	cout << "Print the array " << endl;
	for(j=0; j<a; j++){
		cout<< fourth_array[i] << " ";
	}
	return 0;
}
