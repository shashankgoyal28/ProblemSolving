#include<iostream>
using namespace std;
class CircularQueue{
    int *arr;
    int front;
    int rear;
    int currentSize = 0;
    int capacity;
public:
CircularQueue(int size){
    capacity = size;
    arr = new int[capacity];
    front = 0;
    rear = -1;
}
void push(int val){
    if(currentSize == capacity){
        cout << "Queue is full" << endl;
        return;
    }
    rear = (rear + 1) % capacity;
    arr[rear] = val;
    currentSize++;
}
void pop(){
    if(currentSize == 0){
        cout << "Queue is empty" << endl;
        return;
    }
    front = (front + 1) % capacity;
    currentSize--;
}
int getFront(){
    if(currentSize == 0){
        cout << "Queue is empty" << endl;
        return -1;
    }
    return arr[front];
}
bool empty(){
    return currentSize == 0;
}
};

int main(){
CircularQueue cq(5);
cq.push(10);
cq.push(20);
cq.push(30);
cq.pop();
cout << "Front element is: " << cq.getFront() << endl;


return 0;
}