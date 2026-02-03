#include<iostream>
#include<queue>
using namespace std;

int kthLargest(int arr[], int n, int k)
{
   priority_queue<int, vector<int>, greater<int>> minHeap;
        for(int i = 0; i < n;i++)
        {
            minHeap.push(arr[i]);
            if(minHeap.size() > k)
            {
                minHeap.pop();
            }
        }
        return minHeap.top();
}
int main(){
int arr[] = {7, 10, 4, 3, 20, 15};
int n = sizeof(arr)/sizeof(arr[0]);
int k = 3;
cout << "Kth Largest element is " << kthLargest(arr,n, k);
return 0;
}