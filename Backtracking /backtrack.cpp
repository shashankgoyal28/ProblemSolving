#include<iostream>
using namespace std;

void printAllSubsets(vector<int> &arr, vector<int> &ans, int i)
{
if(i == arr.size())
{
    // Base Case
    // Print the ans vector
    for(int j = 0; j < ans.size(); j++)
    {
        cout << ans[j] << " ";
    }
    cout << endl;
    return; 
}
// Include the ith element
ans.push_back(arr[i]);
printAllSubsets(arr, ans, i + 1);
// Exclude the ith element
ans.pop_back();
printAllSubsets(arr, ans, i + 1);
}
int main(){
vector<int> arr = {1,2,3};
vector<int> ans; // we are Passing this answer vector by reference
printAllSubsets(arr, ans, 0);
return 0;
}