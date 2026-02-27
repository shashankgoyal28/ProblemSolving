#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>& arr, int start, int end)
{
    int prev2 = 0;
    int prev1 = 0;

    for(int i = start; i <= end; i++)
    {
        int take = arr[i] + prev2;
        int skip = prev1;

        int current = max(take, skip);

        prev2 = prev1;
        prev1 = current;
    }

    return prev1;
}

int maxNonAdjacentCircularSum(vector<int>& arr)
{
    int n = arr.size();

    if(n == 1)
        return arr[0];

    // case 1: exclude last
    int case1 = solve(arr, 0, n-2);

    // case 2: exclude first
    int case2 = solve(arr, 1, n-1);

    return max(case1, case2);
}

int main()
{
    vector<int> arr = {4, 8, 12, 16, 20};

    cout << maxNonAdjacentCircularSum(arr);

    return 0;
}


// this Question is similar to the House Robber II problem on LeetCode. The idea is to break the circular array into two linear arrays and solve the maximum non-adjacent sum for both cases, then take the maximum of the two results.
// https://chatgpt.com/share/69a15fc1-92e4-8004-b3f2-f5b7a8182641
// in this Chat this is the Last Possible Answer.