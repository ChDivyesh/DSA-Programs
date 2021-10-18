#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={4,2,-3,1,6};
    int n=sizeof(a)/sizeof(a[0]);
   int  zerosum=0,f=0;
 for(int i=1;i<n;i++){
     zerosum+=a[i];
     unordered_map<int,int> m;
     if(zerosum==0 || m[zerosum]||a[i]==0){
         f=1;
         break;
     }
     else{
         m[zerosum]=1;
     }
 }
    if(f==1) cout<<"yes";
    else cout<<"no";

    /* pefix sum array
    int a[]={4,2,-3,1,6};
    int n=sizeof(a)/sizeof(a[0]);
    int p[] = {};
    p[0]=a[0];
    for(int i=1;i<n;i++){
        p[i]=p[i-1]+a[i];
    }
    unordered_set<int> s;
   for(int i=0;i<n;i++){
       int cur_perfix = p[i];
       if(s.find(cur_perfix) !=s.end()){
           return true;
       }
       if(a[i]==0 ||p[i]==0){
           return true;
       }
       s.insert(cur_perfix);
   }
   return false;*/

}