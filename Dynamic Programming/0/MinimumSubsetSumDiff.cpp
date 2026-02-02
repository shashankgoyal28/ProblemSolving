#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minSubsetSumDifference(int arr[], int n)
{
    //calculating the range of the total sum of elements
    int range = 0;
    for(int i = 0; i < n; i++)
        range += arr[i];

    vector<vector<bool>> dp(n + 1, vector<bool>(range + 1));

    for(int i = 0; i <= n; i++)
        dp[i][0] = true;

    for(int j = 1; j <= range; j++)
        dp[0][j] = false;

    // DP computation
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= range; j++)
        {
            if(arr[i - 1] <= j)
                dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    // Step 2: store possible sums up to range/2
    // Traversing only half range to minimize difference
    vector<int> v;
    for(int j = 0; j <= range / 2; j++)
    {
        if(dp[n][j])
            v.push_back(j);
    }

    // Step 3: find minimum difference
    int mn = INT_MAX;
    for(int i = 0; i < v.size(); i++)
    {
        mn = min(mn, range - 2 * v[i]);
    }

    return mn;
}
int main()
{
    int arr[] = {1,2,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum subset sum difference is "
         << minSubsetSumDifference(arr, n) << endl;

    return 0;
}