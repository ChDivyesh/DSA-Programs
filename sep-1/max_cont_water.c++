                                               /*Container With Most Water*/

/*Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). 
n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). 
Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.*/
#include<bits/stdc++.h>
using namespace std;

/*time comlextity O(n^2)
class Solution {
public:
    int maxArea(vector<int>& height) {
       int maxarea=0;
       for(int i=0;i<height.size();i++){
        for(int j=i+1;j<height.size();j++){
            maxarea=max(maxarea,min(height[i],height[j])*(j-i));
            return maxarea;
        }
       }
    }
};*/
/*time comlextity o(n)*/
class Solution {
public:
    int maxArea(vector<int>& height) {
       int maxarea=0,l=0,r=height.size()-1;
       while(l<r){
           maxarea=max(maxarea,min(height[l],height[r])*(r-l));
           if(height[l]<height[r]){
               l++;
           }
           else{
               r--;
           }
           return maxarea;
       }
    }
};

