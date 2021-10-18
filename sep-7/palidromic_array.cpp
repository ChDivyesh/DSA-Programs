#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {111,222,333};
    for(int i=0;i<3;i++){
        int num =a[i];
        int rev=0;
        while(num>0){
            rev = rev*10+num%10;
            num=num/10;

        }
        if(rev !=num){
          return 0;
        }
    }
     return 1;
}