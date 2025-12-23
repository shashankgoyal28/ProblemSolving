#include<iostream>
using namespace std;

int linearSearch(int arr[][4], int target, int rows, int cols)
{
for( int i = 0; i<rows ; i++)
{
    for(int j = 0; j<cols ;j++)
    {
        if(arr[i][j] == target)
        {
            return 1; // Element found
        }
    }
}
return 0; // Element not found
}
int main(){
int arr[3][4] = {
    {10,20,30,40},
    {50,60,70,80},
    {90,100,110,120}
};
int rows = 3;
int cols = 4;
int target = 170;
int result = linearSearch(arr, target, 3, 4);
if(result == 1)
{
    cout << "Element found in the array." << endl;
}
else
{
    cout << "Element not found in the array." << endl;
}
return 0;
}