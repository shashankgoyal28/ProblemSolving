#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// this &dp is passed by reference because we need to use the same dp table for both functions.
int longestCommonSubsequence(string text1, string text2, vector<vector<int>> &dp) {

    int n = text1.size();
    int m = text2.size();

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

string printingLongestCommonSubsequence(string s1, string s2, vector<vector<int>> &dp){

    int i = s1.size();
    int j = s2.size();
    string result = "";
    while (i > 0 && j > 0) {

        if (s1[i - 1] == s2[j - 1]) {
            result += s1[i - 1];
            i--;
            j--;
        } 
        else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;
        } 
        else {
            j--;
        }
    }

    reverse(result.begin(), result.end());

    return result;
}


int main(){

    string s1, s2;
    cout<<"Enter first string: ";
    cin>>s1;
    cout<<"Enter second string: ";
    cin>>s2;
    int n = s1.size();
    int m = s2.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    int length = longestCommonSubsequence(s1, s2, dp);
    string result = printingLongestCommonSubsequence(s1, s2, dp);

    cout<<"Length of LCS: "<<length<<endl;
    cout<<"Longest Common Subsequence: "<<result<<endl;

    return 0;
}