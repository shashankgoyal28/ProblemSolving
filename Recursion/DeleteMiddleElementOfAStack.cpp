#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &st, int k)
{
// base Case 
if( k == 1)
{
    st.pop();
    return;
}
//Hypothesis 
int Temp = st.top();
st.pop();
solve(st, k-1);
// Induction Step
st.push(Temp);
}
void DeleteMiddleElementOfStack(stack<int> &st)
{
    int size = st.size();
    int k = (size/2) + 1;

    solve(st, k);
}
int main(){
    stack<int> st;
    int k = 3; // k is that element which we want to delete from the top 
    // for eg; 60 here in the intial stack

    st.push(10);
    st.push(20);
    st.push(60);
    st.push(40);
    st.push(50);

    DeleteMiddleElementOfStack(st);

    cout << "After deleting middle: ";
    
    while(!st.empty())
    {
    cout<< st.top() << " ";
        st.pop();
    }
return 0;
}