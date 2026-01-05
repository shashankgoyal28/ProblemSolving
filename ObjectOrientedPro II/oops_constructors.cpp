#include<iostream>
#include<string>

using namespace std;
class Teacher{
    private:
    double salary;
public:
// constructor for teacher class is created it must have the same name 
// as the class.it self and does not have any return type.

// Teacher(){
//     //this basically a NON-parametriezed constructor beacuse there are no parameters
//     // in the brackets.
// cout<<"hi! i am a constructor"<<endl;
// dept = "electronics";
// }
// PARAMETERIZED
Teacher (string n,string d, string sub, double sal){
name = n;
dept = d;
subject = sub; 
salary = sal;
}
Teacher(double age)
{
    age = a;
}

        //properties -> attributes 
string name;
string dept;
string subject;
double age;
void getInfo()
{
    cout<<"name :"<<name<<endl;
    cout<<"subject :"<<subject<<endl;
    cout<<"age :"<<age<<endl;
}
};
int main(){
    
//objects 
Teacher t1("shashank","c++","tools",256000,20);//the call to constructor is on the backend here automatically through compiler
t1.getInfo();


return 0;
}