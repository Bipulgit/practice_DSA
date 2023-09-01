

#include<iostream>
using namespace std;

void printpattern(int n)
{
	int j , k = 0;
	
	//loop to decide the row number
	for(int i = 1; i<=n; i++)
	{
		//if row is odd
		if(i % 2 != 0)
		{
			//print number with the * sign in
			//increasing order
			for(j=k+1; j<k+i; j++)
			    cout<<j<<"*";
			    cout<<j++<<endl;
			//update value of "k"
			k=j;
		}
		
		//if row number is even
		else
		{
			//update value of "k"
			k = k+i-1;
			
			//print number with the "*" in
			//decreasing number
			for(j=k; j>k-i+1; j--)
			   cout<<j<<"*";
			   cout<<j<<endl;
		}
	}
}
//Drive program to test above
int main()
{
	int n = 5;
	printpattern(n);
	return 0;
}
