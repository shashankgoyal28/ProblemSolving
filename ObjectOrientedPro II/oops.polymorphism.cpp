#include<iostream>
using namespace std;
// depending upon the context the compiler decides with constructor to call
// either parameterized or non-parameterized this is polymorphism on the basis of that
// the object can decide which construtor to call
// this is called constructor overloading which is a example of polymorphism
class Student {
public:
string name;
Student()
{
    cout<<"NON-parameterized"<<endl;
}
Student(string name)
{
    this-> name = name; 
    cout<<"parameterized"<<endl;
}
};
int main(){
Student s1("tony stark");
return 0;
}