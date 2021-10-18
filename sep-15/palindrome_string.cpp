#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "abba";
    
    for(int i=0;i<s.length();i++){
        if(s[i] == s[s.length()-i-1]){
            return 1;
        }
    }
    return -1;
    
}