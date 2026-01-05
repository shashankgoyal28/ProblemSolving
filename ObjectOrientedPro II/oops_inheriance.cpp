#include<iostream>
#include<string>

using namespace std;

class Person{
    public:
string name;
int age;
// Person (string name,int age) {
//     this-> name = name;
//     this-> age = age;
// } 
Person(){
cout<< "Parent constructor"<<endl;
}
};
class Student : public Person{
    // name,age,roolno
    public:
    int rollno;
    Student(){
        cout<<"child constructor"<<endl;
    }

    void getInfo(){
cout<<"name:"<<name<<endl;
cout<<"age:"<<age<<endl;
cout<<"rollno:"<<rollno <<endl;
    }
};


int main(){
Student s1;
s1.name = "shashank";
s1.age = 21;
s1.rollno = 24;

s1.getInfo();
return 0;
}