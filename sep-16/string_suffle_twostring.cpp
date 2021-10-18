#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="abc";
    string s1 = "defg";
    string suffle = "abefgcd";
    int i=0,j=0,k=0;
    int n=s.length();
    int m=s1.length();
    while(k<n+m){
        if(s[i]==suffle[k]){
            i++,k++;
        }
        else if(s1[j]==suffle[k]){
            j++,k++;
        }
        else{
            cout<<"not suffle";
        }
        
    }
    cout<<"suffle";
}