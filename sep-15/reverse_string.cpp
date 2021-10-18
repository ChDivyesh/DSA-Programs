#include<bits/stdc++.h>
using namespace std;

int main(){
     string s ="divyesh";

    int l=0,h=s.length()-1;
    int temp;
    while(l<=h){
        temp=s[l];
        s[l]=s[h];
        s[h]=temp;
        l++;
        h--;
    }
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" ";
    }
    
}