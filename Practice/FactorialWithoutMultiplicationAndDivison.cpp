#include<iostream>
using namespace std;
int multiply(int a, int b){
    int result = 0;
    for(int i = 0; i < b;i++){
        result += a;
    }
    return result;
}
int factorial(int n){
    if(n == 0 || n == 1)
        return 1;
        int fact = 1;
        for(int i = 2; i <= n; i++){
            fact = multiply(fact, i);
        }
    return fact;
}
int main(){
    cout << factorial(5) << endl;
return 0;
}