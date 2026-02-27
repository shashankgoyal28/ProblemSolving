#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int>slidingWindowMinimumNoofTransactions(vector<int> arr, int k)
{
    vector<int> result;
    int n = arr.size();
    // Min Heap consist of pairs of (value, index)
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> min_heap;
    for(int i = 0; i< n;i++)
    {
        min_heap.push({arr[i], i});

        while(min_heap.top().second <= i - k)
        {
            min_heap.pop();
        }
        if(i >= k - 1)
        {
            result.push_back(min_heap.top().first);
        }
    }
    return result;
}
int main(){
    vector<int> arr = {10, 20, 30, 50, 10, 70, 30};
    int k = 3;
    vector<int> result = slidingWindowMinimumNoofTransactions(arr, k);
    for(int i : result)
    {
        cout << i << " ";
    }

return 0;
}

        // second -> index of the element in the array
        // first -> value of the element in the array
        // pq.top -> returns the smallest pair in the min heap