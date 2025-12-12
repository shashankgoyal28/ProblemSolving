// brute Force 
#include<iostream>
using namespace std;
#include<vector>

int majorityElement(vector<int> nums) {
    int n = nums.size();
    for (int i: nums){
        int frequency = 0;
        for (int j: nums){
            if(i == j){
                frequency++;
            }
        }
        if(frequency > n/2){
            return i;
        }
    }
    return -1;
}
int main(){
vector<int> nums = {2,2,1,1,1};
int result = majorityElement(nums);
cout << "Majority Element is: " << result << endl;
return 0;
}