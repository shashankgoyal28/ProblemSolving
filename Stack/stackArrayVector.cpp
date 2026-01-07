#include<iostream>
#include<vector> 
using namespace std;

class stack{
    public:
    vector<int> q;

    void push(int val){
        q.push_back(val);
    }
    void pop(){
        if(!q.empty()){
            q.pop_back();
        }
    }
    int top(){
        return q[q.size() - 1]; // Indicating stack is empty
    }
    bool isEmpty(){
        return q.size() == 0;
    }
};
int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.top() << endl; // Output: 30
    st.pop();
    cout << st.top() << endl; // Output: 20

return 0;
}