#include<iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    for(int i = 0; i <n - 1;i++) // this loop is for array traversal
    {
        int smallestIndex = i; //assumin that first element is smallest.
// this loop is for unsorted array
for(int j = i + 1; j < n; j++)
{
    if(arr[j] < arr[smallestIndex])
    {
        smallestIndex = j; // update smallest index
    }
}
    swap(arr[i], arr[smallestIndex]); // swap the smallest element with first element of unsorted array
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0;i<n;i++)
    {
        cout <<arr[i] <<" "<<endl;
    }
}
int main(){
 int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printArray(arr, n);

return 0;
}