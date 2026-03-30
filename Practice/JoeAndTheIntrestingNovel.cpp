#include <iostream>
using namespace std;

int reduceBill(int input1)
{
    if (input1 == 0)
        return 1;

    int msb = 0;
    int temp = input1;

    while (temp > 1)
    {
        temp >>= 1;
        msb++;
    }

    return input1 - (1 << msb);
}

int main()
{
    vector<int> testCases = {
        12, 10, 15, 0, 1, 2, 8, 16, 7, 9, 18, 25, 1024, 1025
    };

    for (int n : testCases)
    {
        cout << "Input: " << n 
             << " -> Output: " << reduceBill(n) << endl;
    }

    return 0;
}