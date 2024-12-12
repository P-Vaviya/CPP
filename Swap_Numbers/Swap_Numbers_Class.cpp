#include <iostream>
using namespace std;

class Swap {
    public:
    int temp;

    void swap(int num1, int num2){
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<"After Swapping : "<<endl;
    cout<<"num1 = "<<num1<<endl;
    cout<<"num2 = "<<num2<<endl;

}
};

int main(){
    int num1, num2;

    cout<<"Enter a number : "<<endl;
    cin>>num1;
    cout<<"Enter a number : "<<endl;
    cin>>num2;

    cout<<"Before Swapping : "<<endl;
    cout<<"num1 = "<<num1<<endl;
    cout<<"num2 = "<<num2<<endl;
    Swap s;
    s.swap(num1, num2);


}