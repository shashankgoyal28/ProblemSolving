#include<iostream>
#include<string>

using namespace std;
// this is a parent class1
class Person {
    public:
    string name;
    int age; 
    };
// child class1 

class Teacher : public Person{
    public:
    string subject;
    };

// child class 2
class Student : public Person{
    int rollno; 
};

int main(){
Teacher t1;
t1.subject = "astro=physics";
cout<<t1.subject <<endl;
return 0;
} 