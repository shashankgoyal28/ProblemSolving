#include<iostream>
using namespace std;

void printDigits(int n)
{
    int count = 0;
    while( n != 0)
    {
        int digit = n % 10;
        count++;
        cout << digit << endl;
        n = n /10;
    }
    cout<< count << endl;
}

int main(){
int n = 3586;

printDigits(n);
return 0;
}