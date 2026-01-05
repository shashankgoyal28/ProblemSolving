#include<iostream>
using namespace std;

class Parent{
public:
    void getInfo(){
    cout<<"parent class"<<endl;
}
};

class Child: public Parent {
public:
    void getInfo(){
    cout<<"child class"<<endl;
}
};
int main(){
Child c1; 
c1.getInfo();

return 0;
}