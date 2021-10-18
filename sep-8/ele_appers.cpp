#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {3, 1, 2, 2, 1, 2, 3, 3};
    int n =sizeof(a)/sizeof(a[0]);
    int k=3;
    unordered_map<int,int> freq;
    vector<int> v;
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    
}

for(auto p:freq){
    if(p.second>n/k){
     v.push_back(p.first);
    }
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    /*x=1;
    freq[x] = upper_bond(a,a+n,x)-lower_bond(a,a+n,x);*/
}
}