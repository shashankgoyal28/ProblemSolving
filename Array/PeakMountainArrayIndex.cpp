#include<iostream>
using namespace std;
int main(){
int arr [7] = {1, 3, 5, 7, 6, 4, 2};
// for(int i = 0; i < 6; i++)
// {
//     // if(arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
//     // {
//     //     cout << "Peak mountain index is: " << i << endl;
//     //     break;
//     // }
// }
for (int p = 0; p < 6;p++)
{
    if(arr[p] > arr[p - 1] && arr[p] > arr[p + 1])
    {
        cout << "Peak mountain index is: " << p << endl;
        break;
    }
}
// we can use either of those. 
return 0;
}̃