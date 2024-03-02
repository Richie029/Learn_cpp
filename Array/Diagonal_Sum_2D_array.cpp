#include<iostream>
using namespace std;
int firstDiagonal(int arr[][4],int row){
    int sum=0;
    for(int i=0;i<row;i++){
        sum+=arr[i][i];
    }
    return sum;
}
int  secondDiagonal(int arr[][4],int row){
    int sum=0;
    int i=0,j=row-1;
    while(j>=0){
    sum+=arr[i][j];
    i++;
    j--;
    }
    return sum;
}
int main(){
    int arr[4][4]={5,8,3,9,6,2,8,4,5,3,2,2,2,8,1,9};
    cout<<"First Diagonal Sum :"<<firstDiagonal(arr,4)<<endl;
    cout<<"Second Diagonal Sum:"<<secondDiagonal(arr,4)<<endl;
    return 0;
}
