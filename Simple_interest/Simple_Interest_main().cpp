#include <iostream>
using namespace std;

int main(){
    float principal, rate_of_interest, tenure, Simple_Interest;

    cout<<"Enter the principal ammount "<<endl;
    cin>>principal;
    cout<<"Enter the rate of interest "<<endl;
    cin>>rate_of_interest;
    cout<<"Enter the no of years "<<endl;
    cin>>tenure;

    Simple_Interest = (principal*rate_of_interest*tenure)/100;

    cout<<Simple_Interest<<endl;
}