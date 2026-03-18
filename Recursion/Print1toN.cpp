#include <iostream>
using namespace std;

void Print1toN(int n)
{
    if (n == 1)
    {
        cout << n << " " << endl;
        return;
    }
    Print1toN(n - 1);
    cout << n << " " << endl;
}

int main()
{
    int n = 7;
    Print1toN(n);
    return 0;
}