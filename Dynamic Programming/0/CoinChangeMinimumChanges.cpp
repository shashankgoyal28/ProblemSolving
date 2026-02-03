#include <iostream>
#include <climits>
using namespace std;

int dp[1001][1001];

int CoinChangeMin(int C[], int N, int n)
{
    // Base cases
    for(int j = 0; j <= N; j++)
        dp[0][j] = INT_MAX - 1;   // impossible with 0 coins

    for(int i = 0; i <= n; i++)
        dp[i][0] = 0;             // 0 coins needed for sum 0

    // Initialization for first coin
    for(int j = 1; j <= N; j++)
    {
        if(j % C[0] == 0)
            dp[1][j] = j / C[0];
        else
            dp[1][j] = INT_MAX - 1;
    }

    // Fill DP table
    for(int i = 2; i <= n; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            if(C[i-1] <= j)
                dp[i][j] = min(
                    1 + dp[i][j - C[i-1]],
                    dp[i-1][j]
                );
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    return (dp[n][N] == INT_MAX - 1) ? -1 : dp[n][N];
}

int main()
{
    int C[] = {1, 2, 3};
    int N = 4;
    int n = sizeof(C) / sizeof(C[0]);

    cout << "Minimum coins = " << CoinChangeMin(C, N, n) << endl;
    return 0;
}