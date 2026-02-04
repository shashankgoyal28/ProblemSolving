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

int countSubsetWithGivenDiff(int arr[], int n, int diff)
{
    int totalSum = 0;
    for(int i = 0; i< n ;i++)
    {
        totalSum += arr[i];
    }
    int sum1 = (diff + totalSum) / 2;
    return subsetSum(arr, n, sum1);
}
int main(){
int arr[] = {1,1,2,3};
    int diff = 1;
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = countSubsetWithGivenDiff(arr, n, diff);
    cout << "Count of subsets with given difference is " << count << endl;
return 0;
}