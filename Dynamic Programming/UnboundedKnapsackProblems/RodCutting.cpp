#include<iostream>
using namespace std;
int dp[1001][1001]; 
// wt -> length(L) of rod pieces
// val -> prices(P) of rod pieces
// w -> total(N) length of rod
int knapsack(int L[], int P[], int N, int n)
{
    for(int i = 0; i <= n;i++)
    {
        for(int j = 0; j <= N; j++)
        {
            if(i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            if(L[i-1] <= j)
            {
                dp[i][j] = max(P[i-1] + dp[i][j - L[i-1]], dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][N];
}
int main(){
    int L[]  = {1,2,3,4};   // lengths
    int P[] = {5,6,8,10};   // prices

    int N = 4;                 // total length of rod
    int n = sizeof(L) / sizeof(L[0]);  // number of pieces

    int Rod = knapsack(L, P, N, n);
    cout<< "Maximum profit from rod cutting = " << Rod << endl; 
return 0;
}