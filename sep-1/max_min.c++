#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {10,2,3,4,1};
    int n= sizeof(a) / sizeof(a[0]);
    int max=a[0],min=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
        else if(min>a[i]){
          min=a[i];
        }
    }
    cout<<max<<" "<<min<<endl;    
return 0;
}