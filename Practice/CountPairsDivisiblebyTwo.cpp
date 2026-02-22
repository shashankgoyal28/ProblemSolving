#include<iostream>
using namespace std;
int countPairs(int arr[], int n)
{
    int count = 0;
    for(int i = 0; i < n;i++){
        for(int j = i+1; j < n; j++){
            if((arr[i]+ arr[j])%2 == 0)
            {
                count++;
            }
        }
    }
    return count;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << countPairs(arr, n) << endl;
return 0;
}