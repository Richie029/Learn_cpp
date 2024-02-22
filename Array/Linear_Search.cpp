#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int x){
  for(int i=0;i<n;i++){
    if(arr[i]==x){
      return i;
    }
  }
  return -1;
}

int main(){
  int arr[]={2,3,6,7,29,34};
  int ans=linearSearch(arr,6,34);
  cout<<ans<<endl;
  return 0;
}
