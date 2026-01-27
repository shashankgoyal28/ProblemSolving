// this is also Josephus Problem but with optimal appraoch
// time complexity is O(n) and space complexity is O(1)
// this is iterative approach
#include<iostream>
using namespace std;
int josephus(int n, int k){
    int i = 1; 
    int ans = 0;
    while(i<=n){
        ans = (ans + k)%i;
        i++;
    }
    return ans + 1;
}
int main(){
int n = 40;
int k = 7;
cout<<"The position of the person who will survive is"<<" "<<josephus(n, k)<<endl;
return 0;
}