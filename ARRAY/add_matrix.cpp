#include <iostream>
using namespace std;
int main(){
    int r , c , a[100][100] , b[100][100] ,sum[100][100], i ,j;
    cout<<"Enter number of rows(between 1 and 100): ";
    cin>> r;
    cout<<"Enter number of columns(between 1 and 100): ";
    cin>> c;
    cout<<"Enter the elements of the first matrix: "<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"Enter elements a"<<i+1<<j+1<<":";
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of the second matrix: "<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"Enter elements b"<<i+1<<j+1<<":";
            cin>>b[i][j];
        }
    }
    for(i=0; i<r; i++){
        for(j=0 ; j<c; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    for(i=0 ; i<r ; i++){
        for(j=0 ; j<c ; j++){
            cout<<sum[i][j]<<" ";
            if(j == c-1){
                cout<<endl;
            }
        }
    }
    return 0 ;
}