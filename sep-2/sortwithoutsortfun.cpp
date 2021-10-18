#include<iostream>
using namespace std;
int main(){
    int a[]={0,2,0,2,1};
    int n= sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           if(a[i]>a[j]){
               int temp =a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}