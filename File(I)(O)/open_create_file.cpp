#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream my_file("c++.txt"); //Create a file name "c++.txt"

    if (!my_file){
        cout<<"Error opening file"<<endl;

        return 1;
    }
my_file.close();

return 0;
}


