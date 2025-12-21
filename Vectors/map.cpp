#include<iostream>
#include<map>
using namespace std;
int main(){
map<string,int> m;
m["tpple:"] = 50;
m["banana:"] = 20;
m["orange:"] = 30;
for(auto item : m){
    cout << item.first << " " << item.second << endl;
}
return 0;
}