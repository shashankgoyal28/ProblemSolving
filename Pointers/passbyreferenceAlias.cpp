#include<iostream>
using namespace std;
void changeA(int &b) 
//this is pass by reference using alias 
//the & here means that b is an alias for a 
{
    b = 20;
}
int main(){
int a = 10;
changeA(a);
cout<< "Value of a after changeA function: "<< a << endl;
return 0;
}