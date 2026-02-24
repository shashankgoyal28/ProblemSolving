#include <iostream>
#include <string>
using namespace std;

int convertString(string A, string B) {
    int n = A.length();

    if (n != B.length())
        return -1;

    for (int i = 0; i < n; i++) {
        if (A[i] < B[i])
            return -1;
    }

    int operations = 0;

    for (char c = 'a'; c <= 'z'; c++) {
        bool needChange = false;

        for (int i = 0; i < n; i++) {
            if (A[i] == c && B[i] != c) {
                needChange = true;
                break;
            }
        }

        if (needChange)
            operations++;
    }

    return operations;
}

int main() {
    int n;
    cin >> n;

    string A, B;
    cin >> A >> B;

    cout << convertString(A, B);
}
// test case 
// n = 5
// A = "abcab"
// B = "aabab"

