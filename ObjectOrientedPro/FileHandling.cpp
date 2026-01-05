//  File Handling (Character-by-Character File Copy)
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char ch;

    ifstream fin("MySecrets.txt");
    ofstream fout("CopyMySecrets.txt");

    if (!fin || !fout) {
        cout << "File error!" << endl;
        return 1;
    }

    while (fin.get(ch)) {   // correct way
        fout << ch;
    }

    fin.close();
    fout.close();

    return 0;
}