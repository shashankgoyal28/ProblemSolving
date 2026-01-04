#include<iostream>
#include<vector> 
using namespace std;
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
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;    
    }
    // copy temp to original array
    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[start + idx] = temp[idx];
    }
}
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
    // merge both parts
    Merge(arr, start, mid, end);
    return ;
    }
}

int main(){
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

mergeSort(arr, 0, arr.size() - 1);
for( int val : arr){
    cout << val << " ";
}
cout << endl;
return 0;
}