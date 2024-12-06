#include <iostream>
using namespace std;

void prime(int num1){
    if (num1 % 2 != 0){
        cout<<"It is prime number"<<endl;
    }
    else{
        cout<<"It is not prime number"<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    prime(n);
}