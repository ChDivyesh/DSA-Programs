#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int x=a[n-1];
    for(int i=n-1;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=x;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}