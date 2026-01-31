#include<iostream>
using namespace std;
int knapsack(int wt[], int val[], int w, int n)
{
    if(n == 0 || w == 0)
    {
        return 0;
    }
    // source
    // wt[n-1] is the weight of the nth item 
    // w is the capacity of the knapsack
    // knapsack(wt, val, w, n - 1) is the case when we do not include the nth item since w1 <=  w
    if(wt[n-1] <= w)
    {
        return max(val[n-1] + knapsack(wt, val, w - wt[n-1], n - 1), knapsack(wt, val, w, n - 1));
    }
    else{
        return knapsack(wt, val, w, n - 1); 
    }
}
int main(){
int wt[]  = {1, 3, 4, 5};   // weights
    int val[] = {1, 4, 5, 7};   // values

    int w = 7;                 // knapsack capacity
    int n = sizeof(wt) / sizeof(wt[0]);  // number of items

    int maxProfit = knapsack(wt, val, w, n);

    cout << "Maximum value in knapsack = " << maxProfit << endl;
}