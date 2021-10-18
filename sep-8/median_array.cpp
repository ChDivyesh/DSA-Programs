#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={9, 10 ,7 ,8};
    int n=sizeof(a)/sizeof(a[0]);
    int median;
    sort(a,a+n);
    int i=n/2;
    if(n%2!=0){
        median = a[i];
    }
    else{
        median = (a[i-1]+a[i])/2;

    }
    cout<<median;
}