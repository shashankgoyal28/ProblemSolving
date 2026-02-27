#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> slidingWindowMinimumNoOfTransactions(vector<int>& arr, int k)
{
    int n = arr.size();
    vector<int> result;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    for(int i = 0; i < n; i++)
    {
        pq.push({arr[i], i});
        while(pq.top().second <= i - k)
        {
            pq.pop();
        }

        if(i >= k - 1)
        {
            result.push_back(pq.top().first);
        }
    }

    return result;
}

        // second -> index of the element in the array
        // first -> value of the element in the array
        // pq.top -> returns the smallest pair in the min heap