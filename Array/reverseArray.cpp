// #include<iostream>
// using namespace std;

// int reverseArray(int arr[],int size)
// {
// for(int i=0;i< size;i++)
// {
// if(arr[i] != arr[i+1])
// {
// arr[i+1] = arr[i];
// }
// return arr[i];
// }
// }

// int main(){
// int arr[] = {1,2,3,4,5};
// int size = 5;
// int result = reverseArray(arr,size);
// cout<< "Reversed array: "<<result<< endl;
// return 0;
// }
// this logic was wrong i will correct it now
// using two pointer approach

#include<iostream>
using namespace std;
int reverseArr(int arr[], int size)
{
    int start = 0;
int end = size - 1;
while(start < end)
{
    // swap logic
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
}
for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}
int main(){
int arr[] = {1,2,3,4,5};
int size = 5;
int start = 0;
int end = size - 1;
int result = reverseArr(arr,size);
cout<< "Reversed array: "<<result<<endl;
return 0;
}