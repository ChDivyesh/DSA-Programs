#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={-2,1,-3,4,-1,2,1,-5,4};
    int n= sizeof(a)/sizeof(a[0]);
    int sum=0;
    int m=a[0];
    for(int i=0;i<n;i++){
        sum= max(sum+a[i],a[i]);
        m=max(sum,m);
    }
   cout<<m<<endl;
}