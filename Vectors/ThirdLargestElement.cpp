// source GFG 
// Input: arr[] = {1, 14, 2, 16, 10, 20}
// Output: 14
// Explanation: Largest element is 20, second largest element is 16 and third largest element is 14

// Input: arr[] = {19, -10, 20, 14, 2, 16, 10}
// Output: 16
// Explanation: Largest element is 20, second largest element is 19 and third largest element is 16 
#include<iostream>
int thirdLargestElement(int arr[],int n)
{
int firstLargest = -1;
int secondLargest = -1;
int thirdLargest = -1;
for (int i = 0; i<n;i++)
{
    if(arr[i] > firstLargest)
    {
        thirdLargest = secondLargest;
        secondLargest = firstLargest;
        firstLargest = arr[i];
    }
    else if(arr[i] > secondLargest && arr[i] != firstLargest)
    {
        thirdLargest = secondLargest;
        secondLargest = arr[i];
    }
    else if(arr[i] > thirdLargest && arr[i] != secondLargest)
    {
        thirdLargest = arr[i];
    }
}
return thirdLargest;
}
using namespace std;
int main(){
int arr[] = {19, -10, 20, 14, 2, 16, 10};
int n = 6;
int result = thirdLargestElement(arr,n);
cout<< "Third largest element is: "<<result<< endl;
return 0;
}