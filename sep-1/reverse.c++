                            /*Write a program to reverse an array or string*/
  #include<bits/stdc++.h> 
  using namespace std;         
int rev_arr(int a[],int s,int l){
    while(s<l){
        int temp = a[s];
        a[s]= a[l];
        a[l]= temp;
        s++;
        l--;
    }
}
int main(){
  int b[]={1,2,3,4,5,6};
  int n= sizeof(b) / sizeof(b[0]);
  rev_arr(b,0,n-1);
 for(int i=0;i<n;i++){
         cout<< b[i];

     }
  return 0;
}
