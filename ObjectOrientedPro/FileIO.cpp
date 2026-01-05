#include <iostream>
#include <fstream>
using namespace std;
 
int main()
{
    fstream file;
 
    // open file in read and write mode
    file.open("MyFile.txt", ios::out);
    file << "geeksforgeeks";
 
    // print the position of the pointer in file
    cout << "the current position of pointer is :"
         << file.tellp() << endl;
 
    // close the open file
    file.close();
}