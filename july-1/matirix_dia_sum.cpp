#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][n];
    int t=3,sum=0,sum1=0,r=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    /* for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
            if(j==2){
            cout<<"\n";
        }
        }
    }*/
    
    while(t--){
     sum+=arr[t][t];
     sum1+=arr[r][t];
     ++r;
     }
     
    cout<<abs(sum-sum1);
    
}



/*int diadiff(vector<vector<int>>arr){
    int t=arr.size(),sum=0,sum1=0,r=0;
    while(t--){
        sum+=arr[t][t];
        sum1+=arr[r][t];
        ++r;
    }
    return abs(sum-sum1);
}

int main(){
    vector<vector<int>>brr;
    int n;
    cin>>n;
    for(int i=0;i<brr.size();i++){
        for(int j=0;j<brr.size();j++){
           cin>>brr[i][j];/*

        }
  }
  cout<<diadiff(brr);
}
*/