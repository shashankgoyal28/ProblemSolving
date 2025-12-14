#include<iostream>
using namespace std;
int main(){
    int a = 10;
int *ptr = &a;
cout << ptr << endl;
cout << &a << endl;
// Pointer to pointer 
int **ptr2 = &ptr;
cout << ptr2 << endl;
cout << *(&a) <<endl;
return 0;
}