#include <iostream>
using namespace std;

class Stack{
    int arr[5];
    int top;
public:
    Stack(){
        top = -1;
    }
    void push(int val){
        if (top == 4){
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = val;
    }
    void pop(){
        if (top == -1){
            cout<<"Stack is EMPTY\n";
            return;
        }
        top --;
    }
    int peek(){
        if (top == -1){
            cout<< "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }
    int size(){
        return top +1;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<< st.peek()<< endl;
    return 0;
}