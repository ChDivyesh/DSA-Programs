#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={1,2,3,4,5,6,7,8,9};
    int c[3][3];
    int n=3,m=3;
   int counter =m-1; 

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
             c[j][counter] = a[i][j];
        }
     counter--;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<c[i][j]<<" ";
        }
       cout<<endl; 
    }

 //swap(a[i][j],a[j][i] keep j=i)then reverse (a[i],a[i]+m)
}