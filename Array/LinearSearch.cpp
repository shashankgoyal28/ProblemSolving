#include<iostream>
using namespace std;
int main(){

int arr[] = {4,5,6,7,8};
int size = 5;

// int target = 7;
int target;
cin >> target;
cout<< "Searching for element: " << target << endl;

for (int i = 0; i < size; i++)
{
    if(arr[i] == target){
        cout << "Element found at index: " << i << endl;
    }
}
return 0;
}
