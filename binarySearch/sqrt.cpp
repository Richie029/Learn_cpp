#include<iostream>
using namespace std;
long long int sqrtInterger(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + ((e - s) / 2);
    int ans = -1;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (n > square)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + ((e - s) / 2);
    }
    return ans;
}

double morePrecision(int n,int prescision,int tempSol){
    double factor=1;
    double ans=tempSol;
    for(int i=0;i<prescision;i++){
        factor/=10;
        for(double j=ans;j*j<n;j+=factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;
    int tempSol=sqrtInterger(n);
    cout<<"Answer is : "<<morePrecision(n,3,tempSol)<<endl;
    return 0;
}
