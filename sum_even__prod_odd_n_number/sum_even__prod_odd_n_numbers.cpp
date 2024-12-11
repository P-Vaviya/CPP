#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int n;
    int even_sum = 0, odd_prod = 1;

    cout<<"Enter a number : "<<endl;
    cin>>n;

    for(int i = 1; i <=n; i++){
        if (i%2==0)
        {even_sum += i;}
        if (i%2!=0)
        {odd_prod *= i;}
    }

    cout<<"The sum of all even numbers between 1 and "<<n<<" is "<<even_sum<<endl;
    cout<<"The product of all odd numbers between 1 and "<<n<<" is "<<odd_prod<<endl;

}
