/*sliding window techniqe*/
#include<bits/stdc++.h>
using namespace std;

int main(){
     int a[]={2, 7, 9, 5, 8, 7, 4};
     int n=sizeof(a)/sizeof(a[0]);
     int c=0,wsize=0,k=6;
     for(int i=0;i<n;i++){
         if(a[i]<=k){
             wsize++;
         }
     }
     for(int i=0;i<wsize;i++){
         if(a[i]<=k){
             c++;
         }
     }
     int ans=wsize-c;
     for(int i=wsize;i<n;i++){
         if(a[i-wsize]<=k){
             c--;
         }
         if(a[i]<=k){
             c++;
         }
         ans=min(ans,wsize-c);
     }
  cout<<ans;
}