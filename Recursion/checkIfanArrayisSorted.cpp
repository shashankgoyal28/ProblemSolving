#include<iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
if(n == 0 || n == 1)
{
    return true;
}
else {
    return (arr[n-1] >= arr[n-2] && isSorted(arr, n - 1));
}
}
int main(){
int arr[] = {1,2,8,4,5};
int n = sizeof(arr)/sizeof(arr[0]);
isSorted(arr, n);
cout<< isSorted(arr, n) << endl;
return 0;
}