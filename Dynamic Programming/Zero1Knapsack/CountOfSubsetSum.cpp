#include<iostream>
using namespace std;
int subsetSum(int arr[], int n, int sum)
{

    int dp[n + 1][sum + 1];
    
    for(int i = 0; i <= n; i++)
        dp[i][0] = 1;      // sum = 0 always possible

    for(int j = 1; j <= sum; j++)
        dp[0][j] = 0;    // no elements → no positive sum

    for(int i = 1; i<= n ;i++)
    {
        for(int j = 1; j <= sum; j++)
        {
            if(arr[i-1] <= j)
            {
                dp[i][j] = dp[i-1][j - arr[i-1]] + dp[i-1][j];
            }
            else 
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}
int main(){
int arr[] = {3, 34, 4, 12, 5, 2};
    int sum = 9;
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = subsetSum(arr, n, sum);
    cout << "Count of subsets with given sum is " << count << endl;
return 0;
}