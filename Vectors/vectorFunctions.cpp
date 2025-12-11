#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    cout << "Elements in the vector: "<<numbers.size()<<endl;
    cout<< " Elements in the vector are:"<< numbers.capacity()<<endl;
    // numbers.pop_back();
    // cout << "Elements in the vector after pop_back: "<<numbers.size()<<endl;
    // numbers.front() = 100;
    // cout << "First element after modification: " << numbers.front() << endl;
    cout<<"Element at index"<<numbers.at(1)<<endl;
}