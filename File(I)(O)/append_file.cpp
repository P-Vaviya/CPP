#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream my_file("c++.txt", ios::app);

    if(!my_file){
        cout<<"Error: Unable to open the file. "<<endl;
        return 1;
    }

    my_file<<"Hi its me"<<endl;
    my_file<<"Hi again its me"<<endl;
    my_file<<"Yes , once again its me"<<endl;

    my_file.close();
    return 0;
}