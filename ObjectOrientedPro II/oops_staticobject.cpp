#include<iostream>
#include<string>

using namespace std;
class ABC{
public:
ABC()
{
    cout<<"CONSTRUCTOR"<<endl;
}
~ABC()
{
    cout<<"DESTRUCTOR"<<endl;
}
};
int main(){
if(true)
{
    static ABC obj;
    }
    cout<<"end of the oops"<<endl;
return 0;
}