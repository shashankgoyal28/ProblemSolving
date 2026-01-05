#include<iostream>
using namespace std;
class Node{
    public:
int data;
Node* next;
// Parameterized constructor
// this is a Node Class
Node(int val){
    data = val; //storing that value in data 
    next = NULL; //next is pointing to null
}
};
class LinkedList{
    Node* head;
    Node* tail;
    public:
    LinkedList(){
        head = NULL;
        tail = NULL;
    }
};
int main(){

return 0;
}