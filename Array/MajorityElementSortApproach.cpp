#include<iostream>
using namespace std;
int main(){
int arr[] = {1,1,1,2,2};
int freq = 1;
int ans = arr[0];
for (int i = 1; i < 5; i++)
{
    if(arr[i] == arr[i-1])
    {
        freq++;
    }
    else
    {
        freq = 1;
    }
}
cout<< "Majority Element is: "<< ans<< endl;
return 0;
}