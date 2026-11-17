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
    Node * head;
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
    void insert_start(int value){
        Node* newNode = new Node ( value);
        newNode->next = head;
        head = newNode;

    }
    void insert_end(int value){
        Node* newNode = new Node(value);
        if (head == NULL){
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void insert_pos(int value , int key){
        Node * temp = head;
        while(temp!= NULL && temp->data != key){
            temp = temp->next;
        }
        if(temp== NULL){
            cout<<"Key not found"<< endl;
            return;
        }
        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;

    }
    void display(){
        Node* temp = head;
        while(temp!= NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<< endl;
    }
};
int main(){
    SinglyLL s;
    s.insert_start(40);
    s.insert_start(30);
    s.insert_start(20);
    s.insert_start(10);
    s.display();
    s.insert_pos(25 , 20);
    s.display();
    return 0;
}
