#include<iostream>
using namespace std;
// for less size of array we use selection sort algorithm to sort the array.
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main(){
    int arr[10]={6,3,1,10,45,-1,-3,111,-9,2};
    selectionSort(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
