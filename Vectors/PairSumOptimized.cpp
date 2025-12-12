#include<iostream>
using namespace std;
vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    int i = 0;
    int j = n-1;
    while(i<j)
    {
        int pairSum = nums[i] + nums[j];
        if(pairSum < target)
        {
            i++;
        }
        else if(pairSum > target)
        {
            j--;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}
int main(){
int target = 13;
vector<int> nums = {2,7,11,15};
vector<int> result = pairSum(nums,target);
cout << "Indices are: "<< result[0]<<","<<result[1]<< endl;
return 0;
}