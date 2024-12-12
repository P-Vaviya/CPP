#include <iostream>
using namespace std;

class Student{
    public:
    long roll_no, marks;
    string name;

    void setData(){
        cout<<"Enter Name of the Student : "<<endl;
        cin>>name;
        cout<<"Enter Roll no. of the Student : "<<endl;
        cin>>roll_no;
        cout<<"Enter Marks of the Student : "<<endl;
        cin>>marks;
    }

    void printData(){
        cout<<"The Name of the student is : "<<name<<endl;
        cout<<"The Roll no. of the student is : "<<roll_no<<endl;
        cout<<"The Marks of the student are : "<<marks<<endl;
    }
};

int main(){
    Student S;
    S.setData();
    S.printData();
}