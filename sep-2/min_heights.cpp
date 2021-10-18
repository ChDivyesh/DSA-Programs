#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={3, 9, 12, 16, 20};
    int n=sizeof(a)/sizeof(a[0]);
    int k=3;
    /*for(int i=0;i<n;i++){
        if(a[i]<=k){
            a[i]+=k;
        }
        else if(a[i]>k){
            a[i]-=k;
        }
    }
    sort(a,a+n);
    /*for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    sort(a,a+n);
    cout<<a[n-1]-a[0];*/
    sort(a,a+n);
    int min1,max1; 
    int ans=a[n-1]-a[0];
    int lag =a[n-1]-k;
    int small = a[0]+k;
    for(int i=0;i<n;i++){
    min1=min(small,a[i]-k);
    max1=max(lag,a[i-1]+k);
    ans=min(ans,max1-min1);

    }
    cout<<ans;
    
}