#include<iostream>
#include<string>
using namespace std;
void func(){
    static int x = 2; //initialisation statement only runs ones 
    cout<< x;
    x++;
} 
int main(){
func();
func();
func();
return 0;
}