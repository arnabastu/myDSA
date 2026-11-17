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
    void delete_end(){
        if(head==NULL){
            cout<<"List is empty"<< endl;
            return;
        }
        if(head->next == NULL){
            delete head;
            head = NULL;
            return;
        }
        Node* temp= head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        Node* last = temp->next;
        temp->next = NULL;
        delete last;
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<< endl;
    }
};
int main(){
    SinglyLL s;
    s.insert_start(30);
    s.insert_start(20);
    s.insert_start(10);
    s.insert_end(40);
    s.delete_end();
    s.display();
    return 0;
}
