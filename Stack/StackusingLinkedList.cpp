#include<iostream>
#include<vector> 
#include<list>
using namespace std;
class stack{
    public:
    list<int> ll;
    void push(int val){
        ll.push_front(val);
    }
    void pop(){
        ll.pop_front();
    }
    int top(){
        return ll.front();
    }
    bool isEmpty(){
        return ll.size() == 0;
    }

};
int main(){

    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
while(!st.isEmpty()){
        cout << st.top() << endl;
        st.pop();
    }
    cout<<"Stack is empty now"<<endl;
return 0;
}