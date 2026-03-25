#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter the Value of N and K" << endl;
    cin >> n >> k;

    vector<int> M(n);
    cout << "Enter the Marks of the Students" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> M[i];
    }

    int breaks = 0;
    for (int i = 1; i < n; i++)
    {
        if (M[i] != M[i - 1])
        {
            breaks++;
        }
    }

    while (k--)
    {
        int X, Y;
        cout << "Enter the Value of X and Y" << endl;
        cin >> X >> Y;

        X--;
        if (X > 0)
        {
            if (M[X] != M[X - 1])
            {
                breaks--;
            }
        }
        if (X < n - 1)
        {
            if (M[X] != M[X + 1])
            {
                breaks--;
            }
        }
        M[X] = Y;
        if (X > 0)
        {
            if (M[X] != M[X - 1])
            {
                breaks++;
            }
        }
        if (X < n - 1)
        {
            if (M[X] != M[X + 1])
            {
                breaks++;
            }
        }
        cout << "The No. Of Students in the Merit List were : " << breaks + 1 << endl;
    }

    return 0;
}