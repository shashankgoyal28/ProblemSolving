#include<iostream>
#include<queue>
using namespace std;

int ConnectRopes(int arr[], int n)
{
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for(int i = 0; i< n;i++)
    {
        minHeap.push(arr[i]);
    }
    int cost = 0;
    while(minHeap.size() > 1)
    {
        int first = minHeap.top();
        minHeap.pop();
        int second = minHeap.top();
        minHeap.pop();
        cost += first + second;
        minHeap.push(first + second);
    }
    return cost;
}
int main(){
int arr[] = {4, 3, 2, 6};
int n = sizeof(arr)/sizeof(arr[0]);
cout << "Minimum cost to connect ropes is " << ConnectRopes(arr,n);
return 0;
}