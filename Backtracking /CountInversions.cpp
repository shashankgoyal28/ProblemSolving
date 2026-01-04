#include<iostream> 
#include<vector>
using namespace std;

int merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp;
    int i = start;
    int j = mid + 1;
    int InvCount = 0;

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
            InvCount += (mid - i + 1);
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    for (int idx = 0; idx < temp.size(); idx++) {
        arr[start + idx] = temp[idx];
    }

    return InvCount;
}

int mergeSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
        return 0;

    int mid = start + (end - start) / 2;
    int leftInv = mergeSort(arr, start, mid);
    int rightInv = mergeSort(arr, mid + 1, end);
    int InvCount = merge(arr, start, mid, end);

    return leftInv + rightInv + InvCount;
}

int main() {
    vector<vector<int>> arr = {{38, 27, 43, 3, 9, 82, 10}};
    int n = arr[0].size();
    cout << mergeSort(arr[0], 0, arr[0].size() - 1) << endl;
    return 0;
}