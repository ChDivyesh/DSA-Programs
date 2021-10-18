                                              //🌟🌟🌟 uses Floyd's Cycle Detection(linked list cycle)
#include<bits/stdc++.h>
using namespace std;
 int main(){
     int a[]={1,3,4,2,2};
     int val;
     int n=sizeof(a)/sizeof(a[0]);
     for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
             if(a[i]==a[j]){
                 val=a[i];
             }
         }
     }
     
     cout<<val;
     //using floyd's cycle detection
     /*int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast =nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
            
        }while(slow!=fast);
        
        int slow2 =nums[0];
        while(slow!=slow2){
            slow=nums[slow];
            slow2=nums[slow2];
        }
        return slow;
    }*/
 }