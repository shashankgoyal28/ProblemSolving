#include <iostream>
using namespace std;

    int kthGrammar(int n, int k) {
        if (n == 1 && k == 1) {
            return 0;
        }

        int mid = pow(2, n - 1) / 2;

        if (k <= mid) {
            return kthGrammar(n - 1, k);
        } else {
            return !kthGrammar(n - 1, k - mid);
        }
    }

int main() {

    int n, k;
    cout << "Enter n and k: ";
    cin >> n >> k;

    int result = kthGrammar(n, k);
    cout << "Result: " << result << endl;

    return 0;
}