#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int ar1[] = { 1, 5, 10, 20, 40, 80, 80 };
    int ar2[] = { 6, 7, 20, 80, 80, 100 };
    int ar3[] = { 3, 4, 15, 20, 30, 70, 80, 80, 120 };
    int n1 = sizeof(ar1) / sizeof(ar1[0]);
    int n2 = sizeof(ar2) / sizeof(ar2[0]);
    int n3 = sizeof(ar3) / sizeof(ar3[0]);
   vector<int> v;
   int i,j,k;
   while(i<n1 &&j<n2 &&k<n3){
       if(ar1[i]==ar2[j] && ar1[i]==ar3[k]){
           v.push_back(ar1[i]); i++,j++,k++; 
       }
       else if(ar1[i]<ar2[j]){
           i++;
       }
       else if(ar2[j]<ar3[k])
       j++;
      else k++;
    int a=ar1[i-1];
    while(ar1[i]==a)
    i++;
    int b=ar2[j-1];
    while(ar2[j]==b)
    j++;
    int c=ar3[k-1];
    while(ar3[k]==ar3[k-1])
    k++;
   }
   cout<<v[0]<<v[1];
}