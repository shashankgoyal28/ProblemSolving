#include<iostream>
using namespace std;
int dp[1001][1001]; 

// length -> Coin denominations 
int CoinChange(int C[], int N, int n)
{
    for(int i = 0; i <= n;i++)
    {
        for(int j = 0; j <= N; j++)
        {
            if(j == 0)
            {
                dp[i][j] = 1;
            }
            else if(i == 0)
            {
                dp[i][j] = 0;
            }
            else if(C[i-1] <= j)
            {
                dp[i][j] = dp[i][j - C[i-1]] + dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][N];
}
int main()
{
    int C[] = {1, 2, 3};
    int N = 4;
    int n = sizeof(C) / sizeof(C[0]);

    cout << "Number of ways = " << CoinChange(C, N, n) << endl;
    return 0;
}
// if it is asking no. of ways/ Count then add it.