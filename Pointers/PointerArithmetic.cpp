#include<iostream>
using namespace std;
int main(){
int arr[] = {1,2,3,4,5};
int a = 10;
int *ptr = &a;
cout << ptr << endl; // prints the address of a
ptr++; // pointer arithmetic
cout << ptr << endl; //+4 bytes

// add/ subtract 
cout << *arr<<endl;
cout << *(arr + 1)<<endl; //20
cout << *(arr + 2)<<endl; //30
cout << *(arr + 8)<<endl; //30
return 0;
}