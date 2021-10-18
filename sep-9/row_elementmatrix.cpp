#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    //int max1=0;
	    int ind=-1;
		int i=0 ,j=m-1;
	    /*for(int i=0;i<n;i++){
	       int  num1= m-(lower_bound(arr[i].begin(),arr[i].end(),1)-arr[i].begin());
	        
	        if(num1>max1){
	            max1=num1;
	            ind=i;
	        }
	    }
		*/
	/*important method of approch*/
	while(i<n&&j>=0){
		if(arr[i][j]==0){
			i++;
		}else{
			ind=i;
			j--;
		}
	}
	   return ind;  
	}

};
}