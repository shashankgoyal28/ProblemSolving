#include<iostream>
#include<string>

using namespace std;
class Teacher{
    private:
    double salary;
public:
string name;
string dept;
string subject;
double age;

Teacher (string name,string dept, string subject, double salary){
    //on the right hand we have the parameter function(constructor)properties 
    // and on the left hand side we have the object properties. 
this-> name = name;
this-> dept = dept;
this-> subject = subject; 
this-> salary = salary;
}
// copy construcor
Teacher(Teacher &Orgobj)
{
    cout<<"i am a custom copy constructor"<<endl; 
this-> name = Orgobj.name;
this-> dept = Orgobj.dept;
this-> subject = Orgobj.subject; 
this-> salary = Orgobj.salary;
}
void getInfo()
{
    cout<<"name :"<<name<<endl;
    cout<<"subject :"<<subject<<endl;
}
};
int main(){
    
//objects 
Teacher t1("shashank","c++","tools",256000);
// t1.getInfo();

// this is a copy constructor
Teacher t2(t1); //deafult copy constructor is invoked  
t2.getInfo();

return 0;
}