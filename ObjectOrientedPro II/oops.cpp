#include<iostream>
#include<string>
using namespace std;

// this is formal example of encapsulation pillar.
class Teacher{
    private:
    double salary;
public:
        //properties -> attributes 
string name;
string dept;
string subject;

        //methods -> function / member functions 
        void changeDepartment(string newDepartment) {
            dept = newDepartment;
        }
        // if we are not able to access salary from the 
        // private class we can access it throught these functions 
        // setter 
        void setSalary(double s)
        {
            salary = s;
        }
        // getter 
        double getSalary()
        {
            return salary;
        }

};
// this is a example of data hiding 
class Account{
            private:
            double balance;
            string password;//data hiding 
            public:
            string AccountID;
            string username;
        }
int main(){
    
//objects 
Teacher t1;
// Teacher t2;
// Teacher t3;
// Teacher t4;
t1.name = "shashank";
t1.subject = "computer";
t1.dept = "c++";
t1.setSalary(25000);
cout<<t1.getSalary() <<endl; 

return 0;
}