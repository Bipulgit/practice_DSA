
// C++ code to print inverse
// pyramid pattern
#include <bits/stdc++.h>
using namespace std;
 
// function to print the
// inverse pyramid pattern
void pyramid(int n)
{
    int i, j, num, gap;
 
    // outer loop to handle number
    // of rows n in this case
    for (i = n; i >= 1; i--) {
         
        // inner loop to create right triangle
        // gaps on left side of pyramid
        for (gap = n - 1; gap >= i; gap--) {
            cout<<" ";
            cout<<" ";
        }
         
        // initializing value corresponding
        // to 'A' ASCII value
        num = 'A';
 
        // loop to print characters on
        // left side of pyramid
        for (j = 1; j <= i; j++) {
            cout << (char) num++ <<" ";
        }
         
        // loop to print characters on
        // right side of pyramid
        for (j = i - 1; j >= 0; j--) {
            cout << (char) --num <<" ";
        }
        cout<<"\n";
    }
}
 
// Driver function
int main()
{
    int n = 9;
    pyramid(n);
    return 0;
}
