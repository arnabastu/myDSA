#include <iostream>
using namespace std;
class StackArray{
private:
    static const int MAX = 5;
    int arr[MAX];
    int top;
public:
    StackArray(){
        top = -1;
    }
    bool isEmpty(){
        return top == -1;
    }
    bool isFull(){
        return top == MAX-1;
    }
    void push(int value){
        if(isFull()){
            cout<<"Statck is Full"<< endl;
            return;
        }
        top ++;
        arr[top] = value;
    }
    int pop(){
        if(isEmpty()){
            cout<<"Stack is Empty"<< endl;
            return -1;
        }
        int value = arr[top];
        top--;
        return value;
    }
    void display(){
        if(isEmpty()){
            cout<< "Stack is Empty"<< endl;
            return;
        }
        for(int i = top; i>=0 ; i--){
            cout<<arr[i]<<" ";
        }
        cout<< endl;
    }
};
int main(){
    StackArray s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.pop();
    s.display();
    return 0;
}