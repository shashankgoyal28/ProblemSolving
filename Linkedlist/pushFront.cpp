#include<iostream>
using namespace std;

// Class 1 : Node -> to create nodes here.
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


// class 2 LinkedList -> to combine the Linked list operations
class LinkedList{
    Node* head;
    Node* tail;
    
    public:
    LinkedList(){
        head = NULL;
        tail = NULL;
    }

    void pushFront(int val){
        // Process/Syntax to add a new node at the front of the linked list
        Node* newNode = new Node(val); // Step 1: Create a new node //Dynamically allocating memory
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
// this fn is to print the linked list
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

ll.printList();

return 0;
}