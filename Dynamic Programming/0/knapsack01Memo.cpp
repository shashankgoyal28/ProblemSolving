#include<iostream>
using namespace std;

int memo[1001][1001];
int knapsack(int wt[], int val[], int w, int n)
{
    if(n == 0 || w == 0)
    {
        return 0;
    }
    if(memo[n][w] != -1)
    {
        return memo[n][w];
    }
    if(wt[n-1] <= w)
    {
        memo[n][w] = max(
            val[n-1] + knapsack(wt, val, w - wt[n-1], n - 1),
            knapsack(wt, val, w, n - 1)
        );
    }
    else
    {
        memo[n][w] = knapsack(wt, val, w, n - 1);
    }
    return memo[n][w];
}

int main()
{
    memset(memo, -1, sizeof(memo));
    int wt[]  = {1, 3, 4, 5};
    int val[] = {1, 4, 5, 7};

    int w = 7;
    int n = sizeof(wt) / sizeof(wt[0]);

    int maxProfit = knapsack(wt, val, w, n);

    cout << "Maximum value in knapsack = " << maxProfit << endl;

    return 0;
}