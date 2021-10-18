#include<bits/stdc++.h>
using namespace std;

/*int count_in(int arr[],int t){
    int count=0;
    for(int i=0;i<t;i++)
      for(int j=i+1;j<t;j++)
            if(arr[i] > arr[j]);{
              count=count+1;
            }
        
    
    return count;
}*/
long long merge(int arr[],int l,int mid,int r){
  long long inv=0;
  int n1=mid-l+1;
  int n2=r-mid;//r-(mid+1)+1;
  int b[n1];
  int c[n2];
  for(int i=0;i<n1;i++){
    b[i]=arr[l+i];

  }
  for(int i=0;i<n2;i++){
    c[i]=arr[mid+1+i];

  }
  int i=0,j=0,k=l;
  while(i<n1 &&j<n2){
    if(b[i]<=c[j]){
      b[k]=arr[i];
      k++,i++;
    }
    else{
      arr[k]=c[j];
     inv+=n1-i;
      k++,j++;
    }
    
  }
  while(i<n1){
    arr[k]=b[n1];
    k++,i++;
  }
  while(j<n2){
    arr[k]=b[n2];
    k++,j++;
  }
  return inv;
}

long long mergeSort(int arr[], int l, int r){
 long long inv=0;
 if(l<r){
   int mid= (l+r)/2;
  inv+= mergeSort(arr,l,mid);
  inv+= mergeSort(arr, mid+1,r);
  inv+=merge(arr,l,mid,r);
}
return inv;
}

int main(){
    int a[]={2,4,1,3,5};
    int n= sizeof(a)/sizeof(a[0]);
    //cout<< count_in(a,n);
    cout<<mergeSort(a,0,n-1);
 return 0;
}