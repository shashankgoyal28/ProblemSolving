#include<iostream>
using namespace std;
int main(){
int arr[5] = {10, 20, 30, 40, 50};

int *ptr2;
int *ptr1 = ptr2 + 2;
cout << ptr1 - ptr2 << endl; // prints 2
// 2 is the no. of bytes that the integer is occupying. 
return 0;
}