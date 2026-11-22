#include <iostream>
using namespace std;
class CircularQueue{
private:
    static const int MAX = 5;
    int arr[MAX];
    int front , rear;
public:
    CircularQueue(){
        front = rear = -1;
    }
    bool isEmpty(){
        return front == -1;
    }
    bool isFull(){
        return (rear +1)% MAX == front;
    }
    void enqueue(int value){
        if(isFull()){
            cout<<"Queue is full"<<endl;
            return ;
        }
        if(isEmpty()){
            front = rear = 0;
        }else{
            rear = (rear + 1) % MAX;
        }
        arr[rear] = value;
    }
    int dequeue(){
        if(isEmpty()){
            cout<<"Queue is Empty" << endl;
            return -1;
        }
        int value = arr[front];
        if(front == rear){
            front = rear = -1;
        }else{
            front = (front +1) % MAX;
        }
        return value;
    }
};