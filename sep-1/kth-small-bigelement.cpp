#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={10,2,5,3,6};
    int n= sizeof(a)/sizeof(a[0]);
    int k=3,temp;
    
    /*sort(a,a+n);
    for(int i=0;i<n;i++){
        //cout<<a[i]<<" ";
    }
    cout<<a[k-1];*/
    /*for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout<<"min kth element"<<a[ k-1]<<"max element"<<a[n-1];*/
    priority_queue<int> q;
    for(int i=0;i<k;i++){
        q.push(a[i]);
    }
    for(int i=k;i<n;i++){
        q.push(a[i]);
        q.pop();

    }
    cout<<q.top()<<endl;

}

