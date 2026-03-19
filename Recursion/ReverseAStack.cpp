#include<iostream>
#include<stack>
using namespace std;

void insert(stack<int> &st, int element)
{
    if(st.empty())
    {
        st.push(element);
        return ;
    }
    int Temp = st.top();
    st.pop();
    insert(st,element);
    st.push(Temp);
    return;
}
void ReverseAStack(stack<int> &st)
{
    if(st.size() == 1)
    {
        return;
    }
    int Temp = st.top();
    st.pop();
    ReverseAStack(st);
    insert(st, Temp);
    return;
}
int main(){
    stack<int> st;
    st.push(50);
    st.push(40);
    st.push(30);
    st.push(20);
    st.push(10);

    cout<< "the Reverse of a Stack is:"<< endl;

    while(!st.empty())
    {
        cout<< st.top()<< endl;
        st.pop();
    }

return 0;
}