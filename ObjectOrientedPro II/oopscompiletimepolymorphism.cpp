#include<iostream>
#include<string>
using namespace std;
// this an example of function overloading 
class print{
    public:
void show(int x)
{
    cout<<"int :"<<x<<endl; 
}
void show(char ch)
{
    cout<<"character :"<<ch <<endl; 
}
};
int main(){
    // automatically it decides at compile time which function to call
// print p1;
// p1.show(1110);
print p1;
p1.show('&' );
return 0;
}