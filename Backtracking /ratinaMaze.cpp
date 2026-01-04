#include<iostream>
#include<vector> 
using namespace std;

// writing my recursive function in terms of a helper function
void helper(vector<vector<int>> &mat, int r, int c, string path,
            vector<string> &ans, vector<vector<bool>> &visited)
{
    int n = mat.size();

    if(r < 0 || c < 0 || r >= n || c >= n ||
       mat[r][c] == 0 || visited[r][c] == true)
    {
        return;
    }

    if(r == n - 1 && c == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[r][c] = true;

    // down
    helper(mat, r + 1, c, path + 'D', ans, visited);
    // up
    helper(mat, r - 1, c, path + 'U', ans, visited);
    // left
    helper(mat, r, c - 1, path + 'L', ans, visited);
    // right
    helper(mat, r, c + 1, path + 'R', ans, visited);

    // backtracking
    visited[r][c] = false;
}

vector<string> findPath(vector<vector<int>> &mat)
{
    vector<vector<bool>> visited(mat.size(),vector<bool>(mat.size(), false));
    vector<string> ans;
    string path = "";

    helper(mat, 0, 0, path, ans, visited);

    return ans;
}

int main()
{
    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<string> ans = findPath(mat);

    for(string path : ans)
    {
        cout << path << endl;
    }

    return 0;
}