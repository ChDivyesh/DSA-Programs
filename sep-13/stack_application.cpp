#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={6,2,5,4,5,1,6};
    int n=sizeof(a)/sizeof(a[0]);
   int nsl[n];

    stack<int> st;
    for(int i=0;i<n;i++){
        while(!st.empty() && a[st.top()]>=a[i])
        // a[st.top()>=a[i]] is for next smallest from left side(for(int i=0))
        // a[st.top()<=a[i]] is for next Greatest from left side(for(int i=0))
        {
        {
            st.pop();
        }
     nsl[i] = (st.empty()?-1:st.top());
     st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<nsl[i]<<" ";
    }
    /*nsr[i]=(st.empty()?n:st.top);

    a[st.top()>=a[i]] is for next smallest from right side(for(int i=n-1))
    a[st.top()<=a[i]] is for next Greatest from right side(for(int i=n-1))*/
}