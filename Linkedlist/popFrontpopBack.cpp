#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
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

    void pushFront(int val){
        Node* newNode = new Node(val); 
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        else {
            newNode-> next = head;
            head = newNode;
        }
        }

    void pushBack(int val){
    
        Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    else {
        tail-> next = newNode;
        tail = newNode;
    }
            }

    void popFront(){
if(head == NULL){
    cout<<"Linked list is empty"<<endl;
    return;
    }
    else {
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
}

    void popback(){
        if(head == NULL){
    cout<<"Linked list is empty"<<endl;
    return;
        }
      Node* temp = head;
      while(temp-> next != tail){
        temp = temp -> next; 
      }
      temp -> next  = NULL; 
      delete tail; // Memory is delete here.
      tail = temp;
    }

    void printList(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp-> data <<" -> ";
            temp = temp-> next;
        }
    }
};

int main(){

LinkedList ll;
ll.pushBack(10);
ll.pushBack(20);
ll.pushBack(30);
ll.popFront();
ll.popback();
// ll.popback();
ll.printList();

return 0;
}