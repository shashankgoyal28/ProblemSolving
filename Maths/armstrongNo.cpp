#include<iostream>
using namespace std;

bool isArmstrong(int n){
 int copyOfOriginalNumberis = n;
 int sumOfCubes = 0;
 while (n!= 0)
 {
    int digit = n % 10;
    sumOfCubes += digit * digit * digit;
    n = n / 10;
 }
 return sumOfCubes == copyOfOriginalNumberis;
}
int main(){
int n = 154; 


if (isArmstrong(n)){
    cout << "Armstrong Number" << endl;
}
else{
    cout << "Not an Armstrong Number" << endl;
}
return 0;
}