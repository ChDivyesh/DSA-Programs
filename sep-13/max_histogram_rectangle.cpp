#include<bits/stdc++.h>

using namespace std;

int main(){
int a[]={6,2,5,4,5,1,6};
int n=sizeof(a)/sizeof(a[0]);
   int nsl[n] ={0};
   int nsr[n] ={0};
   stack<int> st;
   while(st.size()>0){
       st.pop();
   }
   for(int i=0;i<n;i++){
       while(!st.empty() && a[st.top()]>=a[i]){
           st.pop();
       }
       nsl[i] = (st.empty()?-1:st.top());
       st.push(i);
   }
   while(st.size()>0){
       st.pop();
   }
   for(int i=n-1;i>=0;i--){
       while(!st.empty() && a[st.top()]>=a[i]){
           st.pop();
       }
       nsl[i] = (st.empty()?n:st.top());
       st.push(i);
   }
   long long area=LONG_MIN;
   for(int i=0;i<n;i++){
     area=max(area,(nsr[i]-nsl[i]-1)*a[i]+0ll);//0ll is for type casting int to long long
   }
 cout<< area;
}