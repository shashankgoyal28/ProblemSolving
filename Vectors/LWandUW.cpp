#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
set<int> s;
s.insert(5);
s.insert(1);
s.insert(2);
s.insert(2); // duplicate elements are not allowed in set

cout << "lower_bound = "<< *s.lower_bound(3) << endl; // >=
for (int i: s)
{
    cout << i << " ";
}
return 0;
}