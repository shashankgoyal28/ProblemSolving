#include<iostream>
using namespace std;

int diagonalSum(int arr[][3], int n, int m)
{
    int sum = 0;
    for(int i = 0; i< n;i++)
    {
        sum += arr[i][i]; // Primary Diagonal
        if(i != n - i - 1) // To avoid double counting the center element in odd-sized matrices
        {
            sum += arr[i][n - i - 1]; // Secondary Diagonal
        }
    }
    return sum;
}
int main(){
int arr[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
int n = 3;
int m = 3;
int result = diagonalSum(arr, n, m);
cout << "Sum of Diagonal elements is: " << result << endl;
return 0;
}