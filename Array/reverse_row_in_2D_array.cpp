#include <iostream>
using namespace std;
void reverseRow(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int start = 0;
        int end = col - 1;
        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
}
int main()
{
    int arr[3][4] = {2, 3, 4, 5, 1, 2, 6, 8, 4, 9, 3, 2};
    reverseRow(arr, 3, 4);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    return 0;
}
