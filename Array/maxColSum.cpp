#include<iostream>
using namespace std;
int maxColSum(int arr[][3], int row, int col)
{
    int MCS = INT_MIN;
    for (int i = 0; i < row;i++)
    {
        int colSum = 0;
        for(int j = 0;j<col;j++)
        {
            colSum += arr[j][i];
            MCS = max(MCS, colSum);
        }
    }
    return MCS;
}
int main(){
int arr[3][3] = {{1,2,3},
                 {4,5,6},
                 {7,8,9}};
int rows = 3;
int cols = 3;
int result = maxColSum(arr, rows, cols);
cout << "Maximum Column Sum is: " << result << endl;
return 0;
}