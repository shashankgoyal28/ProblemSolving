#include<iostream>
using namespace std;

int maxRowSum(int arr[][3], int rows, int cols)
{
    int MRS = INT_MIN; // Max Row Sum
    for(int i = 0; i<rows;i++)
    {
        int rowSum = 0;
        for(int j = 0; j<cols;j++)
        {
            rowSum += arr[i][j];
        }
        MRS = max(MRS, rowSum);
    }
    return MRS;
}


int main(){
int arr[3][3] = {{1,2,3},
                 {4,5,6},
                 {7,8,9}};
int rows = 3;
int cols = 3;
int result = maxRowSum(arr, rows, cols);
cout << "Maximum Row Sum is: " << result << endl;
return 0;
}