#include<iostream>
using namespace std;
int LCS(string s1, string s2, int m, int n)
{
    if(m == 0 || n == 0)
    {
        return 0;
    } 
    if(s1[m-1] == s2[n-1])
    {
        // this 1 is added becuase we have found a common character at the end, so we add 1 to the result and move both pointers
        return 1 + LCS(s1, s2, m-1, n-1);
    }
    else
    {
        return max(LCS(s1, s2, m-1, n), LCS(s1, s2, m, n-1));
    }
}
int main(){
 string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    int result = LCS(s1, s2, s1.length(), s2.length());
    cout << "Length of Longest Common Subsequence: " << result << endl;
return 0;
}