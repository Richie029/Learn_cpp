#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number of rows and columns: ";
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>arr[i][j];

    for(int j=0;j<m;j++){
        if(j%2==0){
            for(int i=0;i<n;i++){
                cout<<arr[i][j]<<" ";
            }
        } else{
            for (int i = n-1; i>=0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    return 0;
}
