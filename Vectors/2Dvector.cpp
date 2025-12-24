#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<vector<int>> vec2d = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "2D Vector elements are:\n";
    for (int i = 0; i < vec2d.size(); i++) {
        for (int j = 0; j < vec2d[i].size(); j++) {
            cout << vec2d[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}