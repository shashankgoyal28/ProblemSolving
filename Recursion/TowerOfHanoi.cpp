#include <iostream>
using namespace std;

void TowerOfBrahma(int source, int dest, int helper, int noOfPlates)
{
    // Base case
    if (noOfPlates == 1)
    {
        cout << "Move Plate 1 from " << source << " to " << dest << endl;
        return;
    }
    // Step 1: Move n-1 plates from source → helper
    TowerOfBrahma(source, helper, dest, noOfPlates - 1);
    // Step 2: Move nth plate
    cout << "Move Plate " << noOfPlates << " from " << source << " to " << dest << endl;
    // Step 3: Move n-1 plates from helper → dest
    TowerOfBrahma(helper, dest, source, noOfPlates - 1);
}

int main()
{
    int n;
    cout << "Enter number of plates: ";
    cin >> n;

    TowerOfBrahma(1, 3, 2, n);

    return 0;
}