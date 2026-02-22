#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
        int fact = 1;
        for(int i = 2; i <= n; i++){
            fact += factorial(i-1);
        }
    return fact;
}
int main(){
    cout << factorial(5) << endl;
return 0;
}