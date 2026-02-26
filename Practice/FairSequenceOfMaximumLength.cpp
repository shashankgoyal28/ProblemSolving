#include<iostream>
#include<vector>
using namespace std;

int FairSequenceOfMaximumLength(vector<int> arr)
{
int n = arr.size();
long long sum = 0;
int currentMax = arr[0];

for(int i =1; i < n; i++){
    if(arr[i]>0 && currentMax > 0 || arr[i]<0 && currentMax < 0)
    {
        currentMax  = max(currentMax,arr[i]);
    }
    else{
        sum += currentMax;
        currentMax = arr[i];
    }
}
sum += currentMax;
return sum;
}
int main(){
// vector<int> arr = {21,12,13,-21,-2};
vector<int> arr = {-153, -689};

cout << FairSequenceOfMaximumLength(arr) << endl;
return 0;
}