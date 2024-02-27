#include<iostream>
using namespace std;
void prefixSum(int prefix[],int arr[],int n){
  prefix[0]=arr[0];
  for(int i=1;i<n;i++){
    prefix[i]=prefix[i-1]+arr[i];
  }
}
void suffixSum(int suffix[],int arr[],int n){
suffix[n-1]=arr[n-1];
  for(int i=n-2;i>=0;i--){
    suffix[i]=suffix[i+1]+arr[i];
  }
}
void printArr(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[6]={6,4,5,3,2,8};
  int n=6;
  int prefix[6];
  int suffix[6];
  prefixSum(prefix,arr,n);
  suffixSum(suffix,arr,n);
  printArr(prefix,n);
  cout<<endl;
  printArr(suffix,n);
  return 0;
}
