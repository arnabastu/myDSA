#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
class LinkedQueue{
private:
    Node* front , *rear;
public:
    LinkedQueue(){
        front = rear = NULL;
    }
    ~LinkedQueue(){
        Node*temp;
        while(front!= NULL){
            temp = front;
            front = front->next;
            delete temp;
        }
        rear = NULL;
    }
    bool isEmpty(){
        front == NULL;
    }
    void enqueue(int value){
        Node *newNode = new Node(value);
        if(isEmpty()){
            front = rear = newNode;
            return;
        }
        rear ->next = newNode;
        rear = newNode;
    }
    int dequeue(){
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        Node * temp = front;
        int value = temp->data;
        front = front->next;
        if(front == NULL){
            rear = NULL;
        }
        delete temp;
        return value;
    }
};