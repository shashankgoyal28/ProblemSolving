#include<iostream>
#include<vector>
using namespace std;

void changeA(int *ptr) //this is pass by value 
{
     *ptr = 20; // this will not change the value of a in main function
}
int main(){
int a = 10;
// int &ref = a; // reference variable
changeA(&a);
cout<< "Value of a after changeA function: "<< a << endl;
return 0;
}