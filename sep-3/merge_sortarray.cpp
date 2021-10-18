#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int a[]={0};
    int b[] = {1,2};
    int m=0,n=2;
    vector<int> s;
    for(int i=0;i<m;i++){
        int ele =a[i];
        s.push_back(ele);
    }
    for(int i=0;i<n;i++){
        int ele =b[i];
        s.push_back(ele);
    }
    sort(s.begin(),s.end());
    for(auto element:s)
    cout<<element<<" ";

    
/*int p1=m-1,p2=n-1,i=m+n-1;
        while(p2>=0){
            if(p1>=0 && nums1[p1]>nums2[p2]){
                nums1[i--]=nums1[p1--];
            }
            else{
                nums1[i--]=nums2[p2--];}*/
}