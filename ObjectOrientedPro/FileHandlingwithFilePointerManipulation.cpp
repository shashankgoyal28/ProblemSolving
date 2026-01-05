#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string sen;
    fstream iofile("MySecrets.txt", ios::in | ios::out);

    iofile << "helloshashank";

    // Move get pointer to beginning before reading
    iofile.seekg(0, ios::beg);

    getline(iofile, sen);
    cout << sen << endl;

    iofile.close();
    return 0;
}