#include<iostream>
// this is done using the IBH Method Approach
using namespace std;
int Factorial(int n)
{
// base case:
if(n == 1)
{
    return 1;
}
else{
    return 0;
}

int x = n * Factorial(n-1);
return x;
}
int main(){
    int n = -1;
    cout<< Factorial(n) <<" "<< endl;
return 0;
}