// sliding window approach
#include<iostream>
#include<vector>
using namespace std;
pair<int,int> goldenHouse(vector<int> arr, int k)
{
    int n = arr.size();
    int sum = 0; 
    int start = 0;

    for(int end = 0; end < n;  end++){
        sum += arr[end];
         
        while(sum > k)
        {
            sum -= arr[start];
            start++;
        }
        if(sum == k)
        {
            return {start+1, end+1};
        }
    }
    return {-1,-1};

}
int main(){
    vector<int> arr = {5, 3, 7, 14, 18, 1, 18, 4, 8, 3};
    int k = 15;
    auto result = goldenHouse(arr, k);
    cout << result.first << " " << result.second << endl;
return 0;
}




