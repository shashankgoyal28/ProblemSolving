#include<iostream>
using namespace std;

int knapsack(int Price[], int volume[], int k, int n)
{
    if(n == 0 || k == 0)
        return 0;

    if(Price[n-1] <= k)
    {
        return max(
            volume[n-1] + knapsack(Price, volume, k - Price[n-1], n - 1),  // take it
            knapsack(Price, volume, k, n - 1)                              // skip it
        );
    }
    else
    {
        return knapsack(Price, volume, k, n - 1);
    }
}

int main()
{
    int Price[]  = {10, 10, 40, 50, 90};
    int volume[] = {10, 20, 20, 50, 150};
    int k = 105;
    int n = sizeof(Price) / sizeof(Price[0]);
        // N-> no. of Category of Fuels 
        // k -> Maximum amount of money Vijay can spend
        // Price[] -> Price of each category of fuel
        // volume[] -> Volume of fuel in each category

    cout << knapsack(Price, volume, k, n);

    return 0;
}