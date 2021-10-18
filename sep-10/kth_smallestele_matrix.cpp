#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
    //(n^2logn)
    int k=3; 
    priority_queue<int> q;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          if(q.size()<k){
              q.push(a[i][j]);
          }else{
              q.push(a[i][j]);
              q.pop();
          }
        }
    }
    cout<<q.top();


/*int l=a[0][0];
  int h=a[n-1][n-1];
  int ans = l;
  
  
  while(l<=h){
      int mid= (l+h)/2;
      int count=0;
      for(int i=0;i<n;i++){
        count+=(lower_bound(a[i],a[i]+n,mid)-a[i]);  
      }
      if(count<=k-1){
          ans=mid;
          l=mid+1;
      }else{
          h=mid-1;
      }
  }
  
  return ans;
  */

    // look in shape ai 19th day for another method with o(nlogk)


}