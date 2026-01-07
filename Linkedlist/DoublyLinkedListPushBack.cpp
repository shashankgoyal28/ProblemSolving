#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
class DoublyLinkedList{
    public:
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }
    // void pushFront(int val){
    //     Node* newNode = new Node(val);
    //     if(head == NULL){
    //         head = newNode;
    //         tail = newNode;
    //     }
    //     else{
    //         newNode->next = head;
    //         head->prev = newNode;
    //         head = newNode;
    //     }
    // }
    void pushback(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }
    void printList(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
};

int main(){
DoublyLinkedList dll;
// dll.pushFront(10);
// dll.pushFront(20);
// dll.pushFront(30);
dll.pushback(10);
dll.pushback(20);
dll.pushback(30);

dll.printList(); // Output: 30 20 10
return 0;
}