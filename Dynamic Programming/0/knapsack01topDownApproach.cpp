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
                // this is not a base case like in recursion it is just initializing the first row and first column with 0
                dp[i][j] = 0; // i is for items(n) and j is for maximum capacity (weight)
            }
            if(wt[i-1] <= j)
            {
                //dp[i][j] it is the subproblem
                dp[i][j] = max(val[i-1] + dp[i-1][j - wt[i-1]], dp[i-1][j]);
            }
            else{
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