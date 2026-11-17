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

class SinglyLL{
private:
    Node* head;
public:
    SinglyLL(){
        head = NULL;
    }
    ~SinglyLL(){
        Node* temp;
        while(head!= NULL){
            temp = head;
            head = head->next;
            delete temp;
        }
    }
    void insert_begin(int value){
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
    void display(){
        Node* temp = head;
        while(temp!= NULL){
            cout<< temp->data<< "->";
            temp= temp->next;
        }
        cout<<"NULL"<< endl;
    }
};
int main(){
    SinglyLL s;
    s.insert_begin(10);
    s.insert_begin(20);
    s.insert_begin(30);
    s.display();
    return 0;
}