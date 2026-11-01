#include <iostream>
using namespace std;
int main(){
    int nums[5] = {12, 23, 34, 45, 56};
    cout<< "The numbers are: ";
    for(int i = 0; i<5 ; i++){
        cout<<nums[i]<<" ";
    }
    for(int n:nums){
        cout<< n << " ";
    }
    return 0;
}