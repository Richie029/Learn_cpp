// we have to check if we can divide an array such that prefix sum==suffix sum. 
// if we can divide  the array in two parts, then return true else false.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool  isPossible(vector<int> &v, int n){
    int totalSum = 0;
    for (int i = 0; i < v.size();i++){
        totalSum += v[i];
    }
    int prefix = 0, ans;
    for (int i = 0; i < v.size() - 1; i++)
    {
        prefix += v[i];
        ans = totalSum - prefix;
        if (prefix == ans)
        {
            return true;
        }
    }
    return false;
}
int main(){
    vector<int> v = {3,4,-2,5,8,20,-10,8,5};
    cout<<isPossible(v, v.size())<<endl;
   
}
