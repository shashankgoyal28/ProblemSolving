#include<iostream>
// deque stands for double ended queue. 
#include<deque>
using namespace std;
int main(){
deque<int> d = {1,2,3,4,5};
d.push_back(6);
d.push_front(0);
for(int i : d){
    cout << i << " "<<endl;;
}
cout<< "any index element: "<<d[2]<<endl;
return 0;
}