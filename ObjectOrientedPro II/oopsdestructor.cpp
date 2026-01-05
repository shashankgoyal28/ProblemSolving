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
// this was the copy constructor 
// Student(Student &obj)
// {
//     this-> name = obj.name;
//     cgpaPtr = new double ;
//     *cgpaPtr = *obj.cgpaPtr;
// } 

//destructor 
// cgpaPtr = new double ; used to deallocate this dynamically allocated memory 
~Student (){
cout<<"HI i delete Everything"<<endl;
delete cgpaPtr; 
}
void getInfo()
{
    cout<<"Name: "<< name<<endl;
        cout<<"CGPA: "<< *cgpaPtr<<endl; 
}
};
int main(){
    Student s1("shashank",8.4);
    s1.getInfo();
        // s1.getInfo();
        // *(s2.cgpaPtr) = 9.2;
        // s2.getInfo();
return 0;
}