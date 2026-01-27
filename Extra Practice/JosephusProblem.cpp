// josephus Problem 
// we need the output to be 24.
// this is the recursive approach with time complexity O(n) and space complexity O(n).
#include<iostream>
using namespace std;
int josephus(int n, int k){
    // base case 
    if(n==1){
        return 1;
    }
    else 
    {
        return (josephus(n-1, k) + k-1)%n +1;
    }
}
int main(){
int n = 40; // the total no. of people 
int count = 7; // the count for each person to be eliminated 
cout<<"The position of the person who will survive is"<<" "<<josephus(n, count)<<endl;
return 0;
}