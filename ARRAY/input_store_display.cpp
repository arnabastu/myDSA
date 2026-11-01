#include <iostream>
using namespace std;
int main(){
    int nums[5] = {12, 23, 34, 45, 56};
    double sum = 0;
    double average = 0;
    int count = 0;
    for (int i=0; i<5; i++){
        sum += nums[i];
        count += 1;
    }
    average = sum/count;
    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<average<<endl;
    return 0;
}