#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int kthSmallest(vector<int>& arr, int k) {
    priority_queue<int> maxHeap;

    for (int num : arr) {
        maxHeap.push(num);
        if (maxHeap.size() > k) {
            maxHeap.pop();
        }
    }
    return maxHeap.top();
}

int sumBetweenK1K2(vector<int>& arr, int k1, int k2) {
    int num1 = kthSmallest(arr, k1);
    int num2 = kthSmallest(arr, k2);

    int sum = 0;
    for (int num : arr) {
        if (num > num1 && num < num2) {
            sum += num;
        }
    }
    return sum;
}

int main() {
    vector<int> arr = {1, 3, 12, 5, 15, 11};
    int k1 = 3, k2 = 6;

    cout << "Sum of elements between k1-th and k2-th smallest: "
         << sumBetweenK1K2(arr, k1, k2);

    return 0;
}