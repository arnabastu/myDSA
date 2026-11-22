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
class CircularLinkedQueue{
private:
    Node* front ;
    Node* rear;
public:
    CircularLinkedQueue(){
        front = rear = NULL;
    }
    ~CircularLinkedQueue(){
        if(front == NULL){
            return;
        }
        rear->next = NULL;
        Node*temp;
        while(front!= NULL){
            temp = front;
            front = front->next;
            delete temp;
        }
        rear = NULL;
    }
    bool isEmpty(){
        return front == NULL;
    }
    void enqueue(int value){
        Node* newNode = new Node(value);
        if(isEmpty()){
            front = rear = newNode;
            rear->next = front;
            return;
        }
        rear->next = newNode;
        rear = newNode;
        rear->next = front;
    }
    int dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        Node* temp = front;
        int value = temp->data;
        if(front == rear){
            front = rear = NULL;
        }else{
            front=front->next;
            rear->next = rear;
        }
        delete temp;
        return value;
    }
};