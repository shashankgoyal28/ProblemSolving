#include<iostream>
using namespace std;
int trappingRainWater(int height[], int n){
int ans = 0;
int l = 0;
int r = n - 1;
int leftMax = 0;
int rightMax = 0;

while(l <= r){ // two pointer approach
    // traversing the whole array 
    // and finding out the left maximum and right maximum boundary
    leftMax = max(leftMax, height[l]);
    rightMax = max(rightMax, height[r]);
    // if left maximum is smaller than right maximum
if(leftMax < rightMax){
    // then water will be stored according to left maximum
    ans += leftMax - height[l];
    l++; // move left pointer to right
}
else{
    // else water will be stored according to right maximum
    ans += rightMax - height[r];
    r--; // move right pointer to left 
}
}
return ans;
}
int main(){
int height[] = {4,2,0,3,2,5};
int n = sizeof(height)/sizeof(height[0]);
cout << "Maximum water that can be trapped is " << trappingRainWater(height, n);
return 0;
}