#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout << "Enter a string: ";
    cin >> str; 
    int n = 10;

int start = 0;
int end = n -1;
while(start < end){
    swap(str[start], str[end]);
    start++;
    end--;
}
for(int i = 0; i < n; i++){
    cout << str[i];
}

return 0;
}