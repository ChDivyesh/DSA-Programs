#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int d=digits.size()-1;
        while(d>=0){
            if(digits[d]==9)
                digits[d]=0;
            else{
                digits[d]=digits[d]+1;
                return digits;
            }
            d--;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};