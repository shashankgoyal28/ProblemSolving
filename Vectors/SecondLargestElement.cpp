// source: GFG https://www.geeksforgeeks.org/dsa/top-50-array-coding-problems-for-interviews/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
int arr[] = {10, 10, 10};
int n = 3;
int firstLargest = -1;
int secondLargest = -1;
for(int i=0;i<n;i++)
{
    if(arr[i] > firstLargest)
    {
        secondLargest = firstLargest;
        firstLargest =  arr[i];
    }
    else if(arr[i] > secondLargest && arr[i] != firstLargest)
    {
        secondLargest = arr[i];
    }
}
    cout<< "Second largest element is: "<<secondLargest<< endl;
return -1;
}