#include<bits/stdc++.h>
#include<vector>
using namespace std;
void display(vector<int> &v){
 for (int i = 0; i < 5; i++)
 {
     /* code */ cout<<v[i];
 }
 
}
int main(){
 vector<int> s;
 vector<int> v;
 v.push_back(2);
 v.push_back(4);
 v.push_back(5);
 
 for(int i=0;i<5;i++){
     int val;
     cin>>val;
     s.push_back(val);
 }
 vector<int> :: iterator it;
 for(it=s.begin();it!=s.end();it++)
 cout<<*it<<endl;
 for(auto element:s)
 cout<<element;
 swap(s,v);

 display(s);
 
 
 
}