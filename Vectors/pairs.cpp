#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<pair<int, int>, string> p = {{1, 2}, "World"};

    cout << "First element: "
         << p.first.first << ", "
         << p.first.second << endl;

    cout << "Second element: " << p.second << endl;

    return 0;
}