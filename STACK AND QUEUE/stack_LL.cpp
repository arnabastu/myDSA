#include <iostream>
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

class Stack{
    Node* top;
public:
    Stack(){
        top = NULL;
    }
    void push(int x){
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
    }
    void pop(){
        if(top == NULL){
            cout << "Stack is Empty";
            return;
        }
        Node* temp= top;
        top = top->next;
        delete temp;
    }
    int peek(){
        if (top == NULL){
            cout << "Stack is empty";
            return -1;
        }
        return top->data;
    }
    bool empty(){
        return top == NULL;
    }
    void display(){
        Node* temp = top;
        while (temp!= NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout<< endl;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.display();
    cout << st.peek()<<endl;
    st.pop();
    st.display();
    return 0;
}