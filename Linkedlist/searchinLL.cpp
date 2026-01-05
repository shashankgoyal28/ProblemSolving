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

void InsertInMiddle(int val, int pos){
    if(pos < 0){
        cout<<"Invalid Position"<<endl;
        return;
    }
    else if(pos == 0){
        pushFront(val);
        return;
    }
    else{
        Node* temp = head;
        for(int i=0; i<pos-1; i++){
            if(temp == NULL){
                cout<<"Position is greater than the length of the linked list"<<endl;
                return;
            }
            temp = temp-> next;
    }
    // understand this part carefully
    Node* newNode = new Node(val);
    newNode-> next = temp-> next;
    temp-> next = newNode;
    }
}
int searchInLL(int key){
    Node* temp = head;
    int pos = 0;
    while(temp != NULL){
        if(temp-> data == key){
            return pos;
        }
        temp = temp-> next;
        pos++;
    }
    return -1; //key not found
}
        void printList()
        {
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

ll.InsertInMiddle(25,2);
ll.printList();
cout<< ll.searchInLL(25) <<endl;

return 0;
}