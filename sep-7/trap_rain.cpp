#include<bits/stdc++.h>
using namespace std;

int main(){
int a[]={4,7,0,9};
int n= sizeof(a)/sizeof(a[0]);
int left_max[n],right_max[n],total_sum=0;
left_max[0]=a[0];
for(int i=1;i<n;i++){
    left_max[i]=max(left_max[i-1],a[i]);
}
right_max[n-1]=a[n-1];
for(int i=n-2;i>=0;i--){
    right_max[i]=max(right_max[i+1],a[i]);
}
for(int i=0;i<n;i++){
 total_sum+=min(left_max[i],right_max[i])-a[i];
}

cout<<total_sum;


}