#include<iostream>
#include<string>

using namespace std;
class shape
{// abstract class
    virtual void draw() = 0;//pure virtual functions
};

class Circle: public shape{
    public:
    void draw(){
        cout<<"drawing a circle"<<endl;
    }
};
int main(){
Circle c1;
c1.draw(); 
return 0;
}