#include <iostream> 
using namespace std;
void solve(int index, vector<int>& arr, vector<int>& values, int& count, int n) {
    if(index == n - 1) {
        if(arr[index] != arr[index - 1]) {
            count++;
        }
        return;
    }
    for(int val : values) {
        if(val != arr[index - 1]) { // pruning
            arr[index] = val;
            solve(index + 1, arr, values, count, n);
        }
    }
}

int countWays(int n, vector<int>& values, int end) {
    vector<int> arr(n);
    arr[0] = 1;
    arr[n - 1] = end;
    int count = 0;
    solve(1, arr, values, count, n);
    return count;
}

int main() {
    int n = 4;
    vector<int> values = {1,2,3,4};
    int end = 3;

    int totalArrangements = countWays(n, values, end);
    cout << "Total Valid Arrangements: " << totalArrangements << endl;

    return 0;
}