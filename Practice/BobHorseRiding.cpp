#include<iostream>
#include<vector>
using namespace std;

int bobHorseRiding(vector<int> arr, int k)
{
    int n = arr.size();

    int start = 0;
    int sum = 0;
    int maxLength = 0;

    for(int end = 0; end < n; end++)
    {
        sum += arr[end];

        while(sum >= k)
        {
            sum -= arr[start];
            start++;
        }

        int currentLength = end - start + 1;

        if(currentLength > maxLength)
        {
            maxLength = currentLength;
        }
    }

    return maxLength;
}

int main()
{
    // vector<int> arr = {10,90,80,20,90,60,40,60,70,75};
    vector<int> arr = {30,40,50,20,20,10,90,10,10,10};
    int k = 100;

    cout << bobHorseRiding(arr, k) << endl;

    return 0;
}