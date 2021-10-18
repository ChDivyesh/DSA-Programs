#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,3,5,8,9,2,6,7,6,8,9};
    int n=11;
    int min_jump[] = {};
    for(int i=0;i<n;i++){
        min_jump[i]=INT_MAX;
    }
    min_jump[n-1]=0;
    for(int i=n-2;i>=0;i--){
        if(i+a[i] == n-1){
            min_jump[i] = 1;
            continue;
        }
        int min_j=INT_MAX;
        for(int jump=1;jump<=a[i];jump++){
           min_j = min(min_j,min_jump[i+jump]);

        }
        if(min_j!=INT_MAX){
            min_jump[i]=1+min_j;
        }
    }
}