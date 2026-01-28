#include <iostream>
#include <string>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        string n;
        cin >> n;
        long long ans = 0;
        for (char c : n) {
            int d = c - '0';
            if (d > 3) d--;   // skip digit 3
            ans = ans * 9 + d;
        }
        cout << ans << endl;
    }
    return 0;
}