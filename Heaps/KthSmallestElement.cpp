#include<iostream>
#include<queue>
using namespace std;

int kthSmallest(int arr[], int n, int k)
{
    // Build a max heap for the first k elements
    priority_queue<int> maxHeap;
    for(int i = 0; i < n;i++)
    {
        maxHeap.push(arr[i]);
        if(maxHeap.size() > k)
            maxHeap.pop();
    }
    return maxHeap.top();
}
int main(){
int arr[] = {7, 10, 4, 3, 20, 15};
int n = sizeof(arr)/sizeof(arr[0]);
int k = 3;
cout << "Kth smallest element is " << kthSmallest(arr,n, k);
return 0;
}