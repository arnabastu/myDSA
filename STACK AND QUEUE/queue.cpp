#include <iostream>
using namespace std;
class LinearQueue{
private:
    static const int MAX = 5;
    int arr[MAX];
    int front,rear;

public:
    LinearQueue(){
        front = rear = -1;
    }
    bool isEmpty(){
        return front == -1;
    }
    bool isFull(){
        return rear = MAX -1;
    }
    void enqueue(int value){
        if(isFull()){
            cout<<"Queue Overflow"<< endl;
            return;
        }
        if(isEmpty()){
            front = 0;
        }
        rear++;
        arr[rear] =value;
    }
    int dequeue(){
        if(isFull()){
            cout<< "Queue is Full"<< endl;
            return;
        }
        int value = arr[front];
        if(front == rear){
            front = rear = -1;
        }else{
            front++;
        }
        return value;
    }

};
int main(){
    LinearQueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
}