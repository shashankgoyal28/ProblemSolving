#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class CircularLinkedList{
    public:
    Node* head;
    Node* tail;
    CircularLinkedList(){
        head = NULL;
        tail = NULL;
    }
    void insertatHead(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            tail-> next = head;}
            else{
                newNode-> next = head;
                head = newNode;
                tail -> next = head;
            }
    }
    void printList(){
        if(head == NULL){ // List is empty
            return;
        }
        Node* temp = head;
        do{
            cout << temp->data << " ";
            temp = temp->next;
        }
        while(temp != head);
    }
};
int main(){
CircularLinkedList cll;
cll.insertatHead(10);
cll.insertatHead(20);
cll.insertatHead(30);
cll.printList(); // Output: 30 20 10
return 0;
}