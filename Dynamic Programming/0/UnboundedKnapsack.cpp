#include<iostream>
using namespace std;
int dp[1001][1001]; // creating a 2D array for dynamic programming
int knapsack(int wt[], int val[], int w, int n)
{
    for(int i = 0; i <= n;i++)
    {
        for(int j = 0; j <= w; j++)
        {
            if(i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            if(wt[i-1] <= j)
            {
                //dp[i] -> so that we can include the same item again
                dp[i][j] = max(val[i-1] + dp[i][j - wt[i-1]], dp[i-1][j]);
            }
            else{
                //dp[i-1][j] -> so that we do not include the item i.e, we have processed it. that we do not want this
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][w];
}
int main(){
    int wt[]  = {1, 3, 4, 5};   // weights
    int val[] = {1, 4, 5, 7};   // values

    int w = 7;                 // knapsack capacity
    int n = sizeof(wt) / sizeof(wt[0]);  // number of items

    int maxProfit = knapsack(wt, val, w, n);

    cout << "Maximum value in knapsack = " << maxProfit << endl;
return 0;
}