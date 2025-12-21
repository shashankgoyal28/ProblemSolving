#include<iostream>
using namespace std;
int main(){
char str[100];
cout << "Enter a string: ";
cin >> str;
cout << "You entered: " << str << endl;
cin.getline(str, 100,'%');
cout << "You entered using getline: " << str << endl;
return 0;
}