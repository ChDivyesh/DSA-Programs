#include<bits/stdc++.h>
using namespace std;

int main(){
    //  Driver Code Starts

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int i=0;
    int j=c-1;
    int k=r-1;
    int l=0;
    
    vector<int> ans;
    while(ans.size() < r*c){
        
        for(int p=0;p<=j;p++){
            ans.push_back(matrix[i][p]);
        }
        i++;
        
        if(ans.size()>=r*c){
            break;
        }
        for(int p=i;p<=k;p++){
            ans.push_back(matrix[p][j]);
        }
        j--;
        
        if(ans.size()>=r*c){
            break;
        }
        for(int p=j;p>=l;p--){
            ans.push_back(matrix[k][p]);
        }
        k--;
        if(ans.size() >=r*c){
            break;
        }
        for(int p=k;p>=i;p--){
            ans.push_back(matrix[p][l]);
        }
        l++;
    }
    return ans;
    }
};


}