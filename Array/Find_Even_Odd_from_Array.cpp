#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int e, o , arr[8];

    cout<<"Enter 8 numbers : "<<endl;
    for(int i = 0;i<8;i++){
        cin>>e;
        arr[i]=e;
    }
    e =0;
    o=0;

    for(int i = 0; i <8; i++){
        if ((arr[i])%2==0)
        {e++;}
        if ((arr[i])%2!=0)
        {o++;}
    }

    cout<<"Total Even numbers present in array "<<e<<endl;
    cout<<"Total Odd numbers present in array "<<o<<endl;

}
