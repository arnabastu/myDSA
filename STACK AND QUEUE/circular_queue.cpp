#include <iostream>
using namespace std;
class CircularQueue{
    int *arr;
    int currsize , cap;
    int f , r;
public:
    CircularQueue(int size){
        cap = size;
        arr = new int[cap];
        currsize =0;
        f = 0;
        r = -1;
    }
    void push(int data){
        if(currsize == cap){
            cout<<"CQ is full";
            return;
        }
        r = (r+1) % cap;
        arr[r] = data;
        currsize ++;
    }
    void pop(){
        if (empty()){
            cout<<"CQ is empty";
            return ;
        }
        f =(f+1)% cap;
        currsize--;
    }
    int front(){
        if(empty()){
            cout<<"CQ is Empty";
            return -1;
        }
        return arr[f];
    }
    bool(empty()){
        return currsize == 0;
    }
};
int main(){
    CircularQueue cp(3);
    cp.push(1);
    cp.push(2);
    cp.push(3);
    cp.pop();
    while(!cp.empty()){
        cout<<cp.front()<<" ";
        cp.pop();
    }

}