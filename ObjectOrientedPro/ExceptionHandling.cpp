// Multiple Exception Types & Catch-All Handler (catch(...))
#include<iostream>
using namespace std;
void handler(int test)
{
try{
    if(test==0) throw test;//throw int 
    if(test==1) throw 'a';//throw char
     if(test==2) throw 132.23;///throw double

}
catch(...){
    cout<<"caught one "<<endl;
}
}
int main()
{
    cout<<"start\n";
    handler(0);
    handler(1);
    handler(2);
    cout<<"end";
return 0;
}