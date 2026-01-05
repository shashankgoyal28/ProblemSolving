#include<iostream>
#include<string>

using namespace std;
// parent class - person is there 
class Person{
    public:
string name;
int age;
};
// inherited class - clind class student 
class Student : public Person{
    public:
    int rollno;
    };
// one more inherited class on next level 
class GradStudent : public Student{
    public:
string researchArea;
};

int main(){
GradStudent s1;
s1.name = "tony stark";
s1.researchArea = "astro=physics";
cout<<s1.name<<endl;
cout<<s1.researchArea<<endl;
return 0;
}