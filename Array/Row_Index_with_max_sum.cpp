#include<iostream>
#include<limits.h>

using namespace std;
int rowIndexMaxSum(int arr[][4],int row,int col){
    int sum=INT_MIN;
    int index=-1;
    for(int i=0;i<row;i++){
        int total=0;
        for(int j=0;j<col;j++){
            total+=arr[i][j];
            if(sum<total){
                sum=total;
                index=i;
            }
        }
    }
    return index;
}
int main(){
    int arr[5][4]={3,4,7,1,2,8,3,3,5,4,2,2,7,3,0,8,2,8,9,1};
    cout<<"The maximum sum is at the row :"<<rowIndexMaxSum(arr,5,4)<<endl;
    return 0;
}
