#include<iostream>
using namespace std;
void checkElem(int arr[][4],int x){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == x)
            {
                cout << "Yes it is present in " << i << " row " << j << " column" << endl;
                return;
            }
        }
    }

    cout << "No it is not present" << endl;

}
int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int x=19;
   checkElem(arr,x);
}
