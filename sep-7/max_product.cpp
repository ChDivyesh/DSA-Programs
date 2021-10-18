#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={6, -3, -10, 0, 2};
    int n=sizeof(a)/sizeof(a[0]);
    /*vector<long long> v;
    long long maxi=INT_MIN,m=0;
    v.push_back(a[0]);
    for(int i=1;i<n;i++){
        v[i]=v[i-1]*a[i];
        maxi=max(maxi,v[i]);
        m = max(m,maxi);
    }
    cout<< m;*/
   /* class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long ans=INT_MIN;
	    long long max_pro=1;
	    long long min_pro = 1;
	    for(int i=0;i<n;i++){
	        if(arr[i]<0){
	            swap(max_pro,min_pro);
	        }
	        max_pro=max(max_pro*arr[i],arr[i]+0ll);
	        min_pro = min(min_pro*arr[i],arr[i]+0ll);
	        
	        if(arr[i]==0){
	            max_pro =0;
	            min_pro =0;
	        }
	        ans= max(ans,max_pro);
	    }
	    return ans;
	}	
};*/
}