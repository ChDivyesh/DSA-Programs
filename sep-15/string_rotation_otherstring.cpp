#include<bits/stdc++.h>
using namespace std;

int main(){
    string s= "abcd";
    string s2= "cdab";

    string temp;
    temp = s+s;
    if(s.length()!=s2.length()){
        cout<<"not the rotation";
    }

    else if(temp.find(s2)!= string ::npos){
        cout<<"rotation";
    }
    else{
        cout<<"not rotation";
    }
}