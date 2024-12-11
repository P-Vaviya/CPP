#include <iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter a number : "<<endl;
    cin>>num;

    if ((num%2)== 0){
        cout<<"It is not a Number "<<endl;
    } 
    else{
        cout<<"It is a Prime Number "<<endl;
    } 

  return 0;
}