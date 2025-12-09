#include<iostream>
using namespace std;
int linearSearch(int arr[], int size, int target)
{
    for(int i = 0; i< size;i++)
    {
        if(arr[i] == target)
        {
            return i; // this will return the index of the elment.
        }
    }
    return -1; // this will return -1 if the element is not found.
    // since the complete loop is executed, but we still did not find the element.
}
int main(){
int arr[] = {4,5,6,7,8};
int size = 5;
int target = 7;
int result = linearSearch(arr, size, target);
cout<< "Element found at index: " << result << endl;
return 0;
}