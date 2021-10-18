#include<bits/stdc++.h>
using namespace std;

int main(){
    
    char s[] = "divyesh";
    char s1[] = "ram";
    strcat(s , s1);
   // cout<<s[9];
    //strcat for char
    //append() for string 
    string s2 = "sa";
    string s3 = "divyesh";
    //s3.append(s2);
    for (int i = 0; i < s3.length(); i++){
        /* code */
        //cout<<s3[i]<<" ";
    }

    string s4;
    s4=s2+s3;
    //cout<<s4[8];

    //swaping the strings
   /* s3.swap(s2);
    cout<<s3;
    cout<<s2;*/


    string s5 = "(divy\nes\nh)";
    string s6;
for(int i=0;i<s5.length();i++){
    if(s5[i] >= 'a'&& s5[i] <= 'z'){
      s6[i]=s5[i];
    }
    //cout<<s6[i]<<endl;
    //isdigit(s5[i]); is for if there is numbers in the string 
    
}
//strings in array form 
string s7[4] ={"div","yesh","ra","am"};
for (int i = 0; i <4; i++)
{
    /* code *///cout<<s7[i]<<endl;
}

//used for split the string with asked character. here we are given / character. where string will splitwhere there are / characters in the string.
//we are using stringstream and getline.
/*string s8 = "de/kuh/son/efo/ra/l/l";

vector<string> st;
stringstream check(s8);
string inter;
while(getline(check ,inter ,'/'))
 st.push_back(inter);


 for(int i=0;i<6;i++){
     cout<<st[i]<<endl;
 }*/
 //strtok() is function that is used for spliting the string with given character strtok(string name ,'givenvalue') this function is store in another string


}