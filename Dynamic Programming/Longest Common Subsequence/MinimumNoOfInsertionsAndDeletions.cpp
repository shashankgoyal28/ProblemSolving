#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {

        int n = text1.size();
        int m = text2.size();

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {

                if (text1[i - 1] == text2[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                } 
                else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        return dp[n][m];
    }
    void minInsertionsDeletions(string word1, string word2) {

        int n = word1.size();
        int m = word2.size();

        int lcs = longestCommonSubsequence(word1, word2);

        int deletions = n - lcs;
        int insertions = m - lcs;

        cout << "LCS length: " << lcs << endl;
        cout << "Deletions required: " << deletions << endl;
        cout << "Insertions required: " << insertions << endl;
        cout << "Total operations: " << deletions + insertions << endl;
    }
};

int main() {

    string word1, word2;

    cout << "Enter first string: ";
    cin >> word1;

    cout << "Enter second string: ";
    cin >> word2;

    Solution obj;
    obj.minInsertionsDeletions(word1, word2);

    return 0;
}