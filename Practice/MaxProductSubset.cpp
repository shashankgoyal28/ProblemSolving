#include<iostream>
#include<vector>
using namespace std;

int MaximumProductSubset(vector<int> arr)
{
    int x = arr.size();
    int MAX_Negative = INT_MIN;
    int count_Negative_Value = 0, Count_zero = 0;
    int Product = 1;

    if(x == 1)
    {
        return arr[0];
    }
    for(int i = 0; i < x; i++)
    {
        if(arr[i] == 0)
        {
            Count_zero++;
            continue;
        }
        if(arr[i] < 0)
        {
            count_Negative_Value++;
            MAX_Negative = max(MAX_Negative, arr[i]); //this keeps track of the Largest Negative no. present
        }
        Product *= arr[i];
    }
    if(Count_zero == x)
    {
        return 0;
    }
    if(count_Negative_Value % 2 == 1)
    {
        Product /= MAX_Negative;
        // Converting the Earlier Created -ve Product to a +ve Product here. 
    }

    return Product;

}
int main(){
    vector<int> arr = {-1,2,3,4};

    cout<< "The Product of The Selected Subset is: " << MaximumProductSubset(arr) <<  endl;

return 0;
}