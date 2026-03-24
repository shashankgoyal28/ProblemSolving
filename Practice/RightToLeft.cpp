#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout << "Enter rows and columns: ";
    cin >> n >> m;

    int arr[n][m];

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Output:\n";

    for(int i = 0; i < n; i++)
    {
        // Even row → left to right
        if(i % 2 == 0)
        {
            for(int j = 0; j < m; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        // Odd row → right to left
        else
        {
            for(int j = m - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}