//Liner Search 
#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
	for(int i=0; i<size; i++){
		if(arr[i]==key){
			return 1;
		}
	}
	return 0;
}

int main(){
	int arr[10] = {3,2,4,5,-2,5,4,688,9,8};
	cout<<"Enter The value to seacrh: "<<endl;
	int key;
	cin>>key;
	
	bool found = search(arr, 10 , key);
	if(found){
		cout<<"Key is preasent "<<endl;
	}
	else{
		cout<<"Key is absent "<<endl;
	}
	return 0;
}
