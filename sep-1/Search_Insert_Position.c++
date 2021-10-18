#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[]={1,2,3,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int key=4;
    /*for(int i=0;i<n;i++){
      if(a[i]==key){
        cout<<i<<endl;
      }
      else if(a[i]<key&&a[i+1]>key){
        cout<<i+1;
      }
    } */
    int l=0,r=n-1;
    while(l<=r){
    int mid=(l+r)/2;
    if(a[mid]==key){
      return mid;
    }
    else if(a[mid]<key){
      l=mid+1;
    }
    else if(a[mid]>key){
      r=mid-1;
    }
   return l;
 }
 
}