#include<bits/stdc++.h>
using namespace std;
 int main(){
     class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       
       //nums[]={1,3,5,4,2};
        int n=nums.size()/*5*/,i,j;
        for(i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1])/*num[n-2]<num[n-1]=nums[3]<nums[4]that is 4<2 sinces it is not less than 2 so i--
            then nums[2]<nums[3]that is 5<4 sinces it is not less than 4 so i--
            then nums[1]<nums[2]that is 3<5 sinces 3 is less then 5 so i will be 1. */
            {
                break;
            }
        }
        if(i<0)//after the above for loop runs up to i>0 if i<0 we get 5,4,3,2,1 means we can simply reverse the nums.
        {
            reverse(nums.begin(),nums.end());
            }
        else{
            for(j=n-1;j>=0;j--)
            {
                if(nums[j]>nums[i])// here we check num[n-1]>num[i] that is nums[4]>nume[1] because i is 1. 
                {
                    break;
                }
            }
            swap(nums[i],nums[j]);
            reverse(nums.begin()+i+1,nums.end());
        }
       
    }
};
 }