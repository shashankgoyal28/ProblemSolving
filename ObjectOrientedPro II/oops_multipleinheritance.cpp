#include<iostream>
#include<string>

using namespace std;
// this is a parent class1
class Student {
    public:
    string name;
    int rollno;
    };
// parent class2 

class Teacher {
    public:
    string subject;
    double salary;
    };

// this is the child class inheriting from both the above classes 
class TA : public Student, public Teacher{
};

int main(){
TA t1;
t1.name = "tony stark";
t1.subject = "astro=physics";
cout<<t1.name<<endl;
cout<<t1.subject <<endl;
return 0;
}