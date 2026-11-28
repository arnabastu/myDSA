#include <iostream>
using namespace std;
class Text{
private:
    char str[100];
public:
    Text(){
        str[0] = '\0';
        cout<<"Text Object created." <<endl;
    }
    void read(){
        cout<<"Enter the line: ";
        cin.getline(str , 100);
    }
    void display(){
        cout<<"You entered: "<<str<<endl;
    }
    int CountVowels(){
        int count = 0;
        for(int i = 0; str[i]!= '\0';++i){
            char ch= str[i];
            if(ch== 'a'|| ch== 'e'|| ch== 'i'|| ch== 'o'|| ch== 'u'|| ch== 'A'|| ch== 'E'|| ch== 'I'|| ch== 'O'|| ch== 'U' ){
                count++;
            }
        }
        return count;
    }
    void DisplayReverse(){
        int length = 0;
        while(str[length] != '\0'){
            length++;
        }
        cout<<"Reverse:";
        for(int i= length-1 ; i>=0 ; i--){
            cout<<str[i];
        }
        cout<<endl;
    }
    ~Text(){
        cout<<"text object is destroyed."<<endl;
    }
};
int main(){
    Text t;
    t.read();
    t.display();
    cout<<"Number of vowels = "<< t.CountVowels()<<endl;
    t.DisplayReverse();
    return 0;
}