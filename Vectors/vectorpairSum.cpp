// this is the brute force approach //The Complexity - O(n^2)
#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans; //intialized an empty vector to store the indices
int n = nums.size();
for(int i = 0; i<n;i++)
{
    for(int j = i+1; j<n;j++)
    {
        if(nums[i]+nums[j]==target)
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}
return ans;
}
int main(){
int target = 13;
vector<int>nums = {2,7,11,15};
vector<int> result = pairSum (nums,target);
cout<<"Indices are: "<< result[0]<<","<<result[1]<< endl;
return 0;
}