#include <iostream>
#include <vector>   
using namespace std;

int minDrumBeat(int n, vector<int>& board) {
    vector<int> players(n), current(n);

    for (int i = 0; i < n; i++) {
        players[i] = i + 1;
        current[i] = i + 1;
    }

    int count = 0;

    while (true) {
        count++;

        vector<int> temp(n);

        for (int i = 0; i < n; i++) {
            temp[board[i] - 1] = current[i];
        }

        current = temp;

        if (current == players)
            break;
    }

    return count;
}

int main() {
    int n = 5;
    vector<int> board = {2, 3, 1, 5, 4};

    cout << minDrumBeat(n, board);

    return 0;
}