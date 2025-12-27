#include<iostream>
using namespace std;
void printNums(int n){
    // base case
    if(n==0){
        return;
    }
    cout<< n << endl;
    printNums(n-1); // the function is calling itself 
}
int main(){
printNums(5);
return 0;
}