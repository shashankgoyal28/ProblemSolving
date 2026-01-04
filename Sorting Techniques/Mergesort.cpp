#include<iostream>
#include<vector> 
using namespace std;
// this is a Classic Example of Divide and Conquer Algorithm using Recursion 
void mergeSort(vector<int>& arr, int start, int end)
{
     // base case
    if(start >= end)
    {
        return;
    }
    if(start < end){
    int mid = start + (end - start) / 2;
    // left part -> Recursive Call
    mergeSort(arr, start, mid);
    // right part -> Recursive Call
    mergeSort(arr, mid + 1, end);
    return ;
    }
}
void Merge(vector<int>& arr, int start, int mid, int end)
{
    vector<int> temp;
    int i = start; // left part
    int j = mid + 1; // right part

    while(i <= mid && j <= end)
    {
        if(arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else {
            temp.push_back(arr[j]);
            j++;
        }
    } 
}

int main(){
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    
mergeSort(arr, 0, arr.size() - 1);
return 0;
}