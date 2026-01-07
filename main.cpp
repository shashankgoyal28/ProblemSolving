#include<iostream>
using namespace std;
int main(){
int arr[] = {4,5,6,4,7,5,9};
int n = 7;

for(int i = 0; i< n;i++)
{
    int count =0;
    for(int j = 0; j < n;j++)
    {
        if(arr[i] == arr[j])
        {
            count++;
        }
    }
    if(count == 1)
    {
        cout<<arr[i]<<" ";
    }
}
return 0;
}