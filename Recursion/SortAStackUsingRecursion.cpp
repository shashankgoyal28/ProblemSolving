#include<iostream>
#include<stack>
using namespace std;
void Insert(stack<int> &st, int Temp)
{
    if(st.empty() || st.top() <= Temp)
    {
        st.push(Temp);
        return;
    }
    int val = st.top();
    st.pop();
    Insert(st, Temp);
    st.push(val);
}
void SortAStack(stack<int> &st)
{
    if(st.empty())
{
    return;
}
int Temp = st.top();
st.pop();
SortAStack(st);

Insert(st, Temp);
}
int main(){

     stack<int> st;
    st.push(5);
    st.push(1);
    st.push(0);
    st.push(2);

   // Sort the stack
    SortAStack(st);

    cout << "The Sorted Stack is (Top → Bottom): ";

    while(!st.empty())
    {
        cout<< st.top() << " ";
        st.pop();
    }


return 0;
}