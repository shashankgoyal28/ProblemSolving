#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(){

list<int> l;
l.emplace_back(5);
l.push_back(1);
l.push_back(2);
l.push_front(10); 

for(int i: l)
{
    cout << i << " "; 
}
return 0;
}