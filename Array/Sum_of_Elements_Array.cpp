#include<iostream>
using namespace std;

int main(){
    int a, arr[5];
    cout<<"Enter a number "<<endl;
    for(int i = 0;i<6;i++){
        cin>>a;
        arr[i]=a;
    }
    a=0;
    for(int i = 0;i<6;i++){
        a += arr[i];
    }

    cout<<"The sum of all elements in array "<<a<<endl;
    return 0;
}