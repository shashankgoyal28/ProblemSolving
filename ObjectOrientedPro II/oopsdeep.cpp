#include<iostream>
#include<string>
using namespace std;
class Student{
public: 
string name;
double* cgpaPtr;
// constructor 
Student(string name, double cgpa)
{
    this-> name = name;
    cgpaPtr = new double ;// allocating new memory 
    *cgpaPtr =cgpa; //derefrencing  
}

Student(Student &obj)
{
    this-> name = obj.name;
    cgpaPtr = new double ;
    *cgpaPtr = *obj.cgpaPtr;
} 
void getInfo()
{
    cout<<"Name: "<< name<<endl;
        cout<<"CGPA: "<< *cgpaPtr<<endl; 
}
};
int main(){
    Student s1("shashank",8.4);
    Student s2(s1);
        s1.getInfo();
        *(s2.cgpaPtr) = 9.2;
        s2.getInfo();
return 0;
}