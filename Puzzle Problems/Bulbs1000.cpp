#include<iostream>
using namespace std;

int main(){
int noofBulbs = 1000;
int root = sqrt(noofBulbs);
for(int i = 1; i <= root; i++){
    cout<< i*i<<" ";
}
return 0;
}