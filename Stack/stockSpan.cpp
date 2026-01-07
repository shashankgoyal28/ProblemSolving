// Definition for Stock Span Problem
// Span1: max no. of consecutive days the price of stock was less than or equal to today's price
// price <= today price
// include that particular day also 
// eg: prices = [100, 80, 60, 70, 60, 75, 85]
// spans =  [  1 , 1 , 1 , 2 , 1 , 4 , 6 ]
// prevHigher: Immediate greater value for any day towards left side.

#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void stockspan(vector<int>& prices){
    stack<int> s;
    for(int i=0; i<prices.size(); i++){
        // in this while loop we are popping all the smaller or equal elements from the stack
        while(s.size() > 0 && prices[s.top()] <= prices[i]){
            s.pop();
        }
        if (s.size() == 0){
            // no greater element on left side
            cout << i + 1 << " "; // span is i+1
        }
        else{
            // greater element exists on left side
            cout << i - s.top() << " "; // span is current index - (s.top = prevHigher index)
        }
        s.push(i); // pushing current index onto stack
    }
    cout<<endl;
}

int main(){
vector<int> prices = {100, 80, 60, 70, 60, 75, 85};
stockspan(prices);

return 0;
}