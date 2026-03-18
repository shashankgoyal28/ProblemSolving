#include<iostream>
#include<vector>
using namespace std;

void insert(vector<int> &arr, int Temp)
{
if(arr.size() == 0 || arr[arr.size() - 1] <= Temp)
{
    arr.push_back(Temp);
    return;
}
int val = arr[arr.size() - 1];
arr.pop_back();
insert(arr, Temp); 
arr.push_back(val);
return;
}

void sort(vector<int> &arr){
// base case 
if(arr.size() == 1)
{
    return; 
}
int Temp = arr[arr.size() - 1];
arr.pop_back();
sort(arr);
insert(arr, Temp);
}

int main(){
    vector<int> arr = {0,1,5,2};
    sort(arr); 

    for(int x : arr)
        cout << x << " ";

return 0;
}