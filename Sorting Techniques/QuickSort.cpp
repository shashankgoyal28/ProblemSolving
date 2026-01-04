#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> & arr, int start, int end)
{
    int index = start - 1;
    int pivot = arr[end]; // last element as pivot

    for(int j = start; j <  end; j++)
    {
        if(arr[j] <= pivot)
        {
            index++;
            swap(arr[j], arr[index]);
        }
    }
    index++;
    swap(arr[end], arr[index]);
    return index;
}
void quickSort(vector<int>& arr, int start, int end)
{
    if(start >= end)
    {
        return;
    }
if( start <= end)
{
    int pivot = partition(arr,start,end);
    // left part -> Recursive Call
    quickSort(arr, start, pivot - 1);
    // right part -> Recursive Call
    quickSort(arr, pivot + 1, end);
    return ; 
}
}
int main(){

    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    quickSort(arr, 0, arr.size() - 1);
    for( int val : arr){
        cout << val << " ";
    }
    cout << endl;
return 0;
}