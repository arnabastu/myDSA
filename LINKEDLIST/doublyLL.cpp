#include <iostream>
using namespace std;
class DNode{
public:
    int data;
    DNode* prev;
    DNode* next;

    DNode(int value){
        data = value;
        prev = NULL;
        next = NULL;
    }
};
class DoublyLL{
private:
    DNode* head;
public:
    DoublyLL(){
        head = NULL;
    }
    ~DoublyLL(){
        DNode* temp;
        while(head != NULL){
            temp = head;
            head = head->next;
            delete temp;
        }
    }
    void insert_start(int value){
        DNode* newNode = new DNode(value);
        newNode->next = head;
        if(head!=NULL){
            head->prev = newNode;
        }
        head = newNode;
    }
    void display(){
        DNode* temp = head;
        while(temp!= NULL){
            cout<< temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<< endl;
    }
};
int main(){
    DoublyLL d;
    d.insert_start(40);
    d.insert_start(30);
    d.insert_start(20);
    d.insert_start(10);
    d.display();
    return 0;

}
