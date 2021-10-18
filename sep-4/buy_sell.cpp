#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={7,1,3,5,6,4};
    int min1=INT_MAX,max1=0;
    int n = sizeof(a)/sizeof(a[0]);
    for(int j=0;j<n;j++){
        min1=min(min1,a[j]);
        max1=max(a[j]-min1,max1);
    }
 cout<<max1;

}