#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="ddivsyyesh";
    /*for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
        if(s[i]==s[j]){
            cout<<s[j]<<" ";
        }
    }
    }*/
    int i=0;
    for(int j=i+1;j<s.length();j++){
        if(s[i] == s[j]){
            i++;
            cout<<s[j];
            
        }
    }

}