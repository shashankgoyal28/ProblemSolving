#include <iostream>
#include <queue>
using namespace std;

void NearlySorted(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int index = 0;
    // Push first k+1 elements
    for(int i = 0; i < n; i++)
    {
        minHeap.push(arr[i]);

        if(minHeap.size() > k + 1)
        {
            arr[index++] = minHeap.top();
            minHeap.pop();
        }
    }
    // Empty remaining heap
    while(!minHeap.empty())
    {
        arr[index++] = minHeap.top();
        minHeap.pop();
    }
}

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    NearlySorted(arr, n, k);
    cout << "Sorted Array is: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}