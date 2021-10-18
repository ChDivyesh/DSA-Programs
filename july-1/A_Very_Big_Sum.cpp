#include<bits/stdc++.h>
using namespace std;

/*int main(){
    vector<long>ar;
    int n;
    long sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        long item;
        cin>>item;
        ar.push_back(item);
    }
    for(int i=0;i<n;i++){
        sum+=ar[i];
    }
    cout<<sum<<endl;
}*/

long bigsum(vector<long> ar){
    long sum=0;
    for(int i=0;i<ar.size();i++){
        sum+=ar[i];
        }
    return sum;
}
int main(){
    int n;
    cin>>n;
    vector<long>br;
    for(int i=0;i<n;i++){
        long item;
        cin>>item;
        br.push_back(item);
    }
    cout<<bigsum(br);
}