// Exception Handling (User-Defined Throws & Multiple Catch Blocks)
#include <iostream>
using namespace std;

float division(int x, int y) {
    if (y == 0)
        throw 5;   // throw int
    return static_cast<float>(x) / y;
}

int main() {
    float k = 0;

    try {
        k = division(25, 0);
        cout << k << endl;
    }
    catch (int i) {
        cout << "caught i = " << i << endl;
    }

    return 0;
}