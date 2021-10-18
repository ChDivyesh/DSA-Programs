#include<bits/stdc++.h>
using namespace std;


int main(){
int a[3];
int b[3];
int alic=0,bob=0;
int r[2];
for(int i=0;i<3;i++){
    cin>>a[i];
}
for(int i=0;i<3;i++){
    cin>>b[i];
}

for(int j=0; j<3;j++){
        if(a[j]>b[j]){
           alic=alic+1;
        }
        else if(a[j]<b[j]){
            bob=bob+1;

        }
       
    }

r[0]=alic;
r[1]=bob;
cout<<r[0]<<" "<<r[1];



}