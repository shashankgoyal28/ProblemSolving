#include<iostream>
using namespace std;
int main(){
int arr[] = {3,-4,5,4,-1,7,-8};
int size  = 7;
int maxSum = INT_MIN;
for (int start = 0; start < size; start++)
{
    int currentSum = 0;
    for(int end = start;end<size;end++)
    {
        currentSum = currentSum + arr[end];
        maxSum = max(maxSum,currentSum);
    }
}
cout<< "Maximum subarray sum is: "<< maxSum<< endl;
return 0;
}

// this code is just to print all subarrays
// for (int start = 0; start < size; start++)
// {
//     for(int end = start;end<size;end++)
//     {
//         for(int k = start;k<=end;k++)
//         {
//             cout<< arr[k]<<" ";
//         }
//         cout<< " ";
//     }
//     cout<<endl;
// }