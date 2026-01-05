#include<iostream>
#include<string>
using namespace std;
class A{
    public:
    int x;
    void incx(){
        x = x + 10; 
    }
};
int main(){
A obj;
obj.x = 0;
cout << obj.x<<endl;
obj.incx();
cout << obj.x<<endl; 
return 0;
}