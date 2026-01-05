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

    void pusBack(int val){
    
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


        void printList(){
            Node* temp = head;
            while(temp != NULL){
                cout<<temp-> data <<" -> ";
                temp = temp-> next;
            }
            cout<<"NULL"<<endl;
        } 
};


int main(){
LinkedList ll;
ll.pushFront(10);
ll.pushFront(20);
ll.pushFront(30); 
ll.pusBack(40);
ll.pusBack(50);

ll.printList();

return 0;
}