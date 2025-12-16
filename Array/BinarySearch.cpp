#include<iostream>
using namespace std;
int main(){
int arr[6] = {-1,10, 20, 30, 40, 50};
int start = 0;
int n = 6;
int target = -1;
int end = n-1;
while(start <= end){
    int mid = start + (end - start)/2;
    if(target>arr[mid]){
        start = mid + 1; 
    }
        else if(target < arr[mid])
        {
            end = mid - 1;
        }
        else if(target == arr[mid])
        {
            cout << "Element found at index: " << mid << endl;
            break; 
        }
    }
    return -1;
}


