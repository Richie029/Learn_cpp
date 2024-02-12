#include<iodtream>
using namespace std;
int binarySearch(int arr[],int n,int key){
  int s=0,e=n-1;
  int mid=s+((e-s)/2);
  while(s<=e){
    if(arr[mid]==key){
      return mid;
    } else if(key<arr[mid]){
      e=mid-1;
    }else{
      s=mid+1;
    }
    mid=s+((e-s)/2);
  }
}
int main(){
  int arr[10]={1,2,3,4,5,6,7,8,9,10};
  cout<<"Index of the key is "<< binarySearch(arr,10,9)<<endl;
  return 0;
}
