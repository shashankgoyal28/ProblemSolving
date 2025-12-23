#include <iostream>
#include <utility>
using namespace std;

pair<int,int> linearSearch(int arr[][4], int target, int rows, int cols)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(arr[i][j] == target)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

int main()
{
    int arr[3][4] = {
        {10,20,30,40},
        {50,60,70,80},
        {90,100,110,120}
    };

    int target = 80;

    pair<int,int> result = linearSearch(arr, target, 3, 4);

    cout << result.first << " " << result.second;
    return 0;
}