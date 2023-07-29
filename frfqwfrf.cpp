#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int w[100],p[100],t[100][100];
int i=0,cap=0;

void Input(){
  int temp=0;
  cout<<endl<<"Enter no of elemens: ";
  cin>>i;
  cout<<endl<<"Enter Weight: ";
  for(temp=0;temp<i;temp++){
    cin>>w[temp];
    cout<<"              ";
  }
  cout<<endl;
  cout<<"Enter Profit: ";
  for(temp=0;temp<i;temp++){
    cin>>p[temp];
    cout<<"              ";
  }
  cout<<endl;
  cout<<"Enter the capacity of Knapsack: ";
  cin>>cap;
  cout<<endl;
}

void Table(){
  int j=0;int l=0;int temp=0;
  for(l=0;l<i;l++){
    for(j=0;j<=cap;j++){
      if(l>=1){
        temp=w[l];
        if(j-temp>=0){t[l][j]=std::max(t[l-1][j],t[l-1][j-temp]+p[l]);}
        else{t[l][j]=t[l-1][j];}
      }
      else{
        if(j<w[0]){t[0][j]=0;}
        else{t[l][j]=p[l];}
      }
    }
  }
}

void Display(){
  cout<<"Weight"<<"\t"<<"Profit";
  for(int temp=0;temp<=cap;temp++){cout<<"  "<<temp;}
  cout<<endl<<endl;
  for(int l=0;l<i;l++){
    cout<<"  "<<w[l]<<"\t"<<"  "<<p[l]<<"\t";
    for(int m=0;m<=cap;m++){
      cout<<t[l][m]<<"  ";
    }
    cout<<endl;
  }
  cout<<endl;
  cout<<"Optimal Solution is: "<<t[i-1][cap]<<endl;
}

void SelectedWeights(){
    cout<<endl<<"Selected weights:";
    int totalProfit = t[i-1][cap];
    for (int j = i-1; j > 0; j--){
      if (totalProfit != t[j-1][cap]){
        cout << " " << w[j];
        cap -= w[j];
        totalProfit -= p[j];
      }
    }
    if (totalProfit != 0){
      cout << " " << w[0];
    }
    cout << "" << endl;
}

int main(){
  Input();
  Table();
  Display();
  SelectedWeights();
}
