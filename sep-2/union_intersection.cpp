#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s1;
    int a[]={1,2,3};
    int b[]={2,3,4,5};
    int n= sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        s1.insert(a[i]);
    }
    for(int i=0;i<n;i++){
        s1.insert(b[i]);
    }
    
    
    for(int ele:s1){
        cout<<ele<<" ";
    }




}