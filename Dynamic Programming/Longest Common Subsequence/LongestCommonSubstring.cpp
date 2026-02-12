#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int longestCommonString(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        int maxi = 0;   // store maximum length found

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {

                if (text1[i - 1] == text2[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                    maxi = max(maxi, dp[i][j]);   
                } 
                else {
                    dp[i][j] = 0;
                }
            }
        }

        return maxi;
    }
};

int main() {
    Solution sol;

    string text1, text2;
    cout << "Enter first string: ";
    cin >> text1;

    cout << "Enter second string: ";
    cin >> text2;

    int result = sol.longestCommonString(text1, text2);
    cout << "Length of Longest Common Substring: " << result << endl;

    return 0;
}