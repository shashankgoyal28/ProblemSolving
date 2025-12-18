// Painter's Partition Problem
// Given are N boards of length of each given in the form of array, 
// and M painters, such that each painter takes 1 unit of time to paint 1 unit 
// of the board.
// The task is to find the minimum time to paint all boards under the constraints
//  that any painter will only paint continuous sections of boards
#include<iostream>
#include<vector>
using namespace std;
// n - no. of boards
//m - no. of painters
// mid - int maxAllowedTime
bool isValid(vector<int> arr, int n, int m, int maxAllowedTime)
{
    int painter = 1; // we are assumning
    int time = 0;

    for(int i =0; i<n ;i++)
    {
        if(time + arr[i] <= maxAllowedTime)
        {
            time += arr[i];
        }
        else{
            painter++;
            time = arr[i];
        }
    }
    return painter > m ? false : true; // if painters exceed m return false else true
}
int painterPartition(vector<int>arr, int n, int m)
{
if(m > n)
{
    return -1; // not enough boards to allocate //since i have only 2 painters
}
int sum = 0;
for(int i = 0; i < n; i++)
{
    sum += arr[i];
}
int ans = -1;
int start = 40;
int end = sum; 
while(start <= end)
{
    int mid = start +(end - start)/2;
if(isValid(arr,n,m,mid)){ //this function decides wheter to go left or right 
    ans = mid;
    end = mid -1;
}
else{
    start = mid + 1;
}
return ans;
}
}
int main()
{
vector<int> arr = {40,30,10,20};
int n = 4;
int m = 2;
cout<<painterPartition(arr, n, m)<<endl;
return 0;
}
