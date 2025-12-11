#include<iostream>
#include<vector>
using namespace std;

int main() {
    // vector<int> vector1 = {1, 2, 3};
    vector<int> vector2 (5,0);
    // this is the Syntax for using for each Loop. 
    for(int i : vector2){
        cout << i << " ";
    }
    cout<< "Vector 2 elements: "<<vector2[0]<<" "<<
    vector2[1]<<" "<<vector2[2]<<" "<<vector2[3]<<" "<<vector2[4]<<endl;
    cout << vector2[2] << endl;
    return 0;
}

// on vectors we apply a special kind of loop that is the 
// for each loop, 
// for example "i" is not the index here, but the element - Value itself
