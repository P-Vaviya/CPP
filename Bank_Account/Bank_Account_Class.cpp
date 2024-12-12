#include <iostream>
using namespace std;

class Bank {
private:
    int balance = 22223;

public:
    void Display() {
        cout << "Your Balance is " << balance << endl;
    }

    void Debit(int d) {
        if (balance < d) {
            throw "Insufficient funds!"; // Throwing a string literal as an exception
        }
        balance -= d; // Update balance after debit
        cout << "Your account has been debited by rupees " << d << endl;
        cout << "Your Updated Balance is: " << balance << endl;
    }

    void Credit(int c) {
        balance += c; // Update balance after credit
        cout << "Your account has been credited with rupees " << c << endl;
        cout << "Your Updated Balance is: " << balance << endl;
    }
};

int main() {
    Bank P;
    string name = "abc", pass = "abc";
    int Acc_no = 12345; // Set a sample account number

    string dname, dpass;
    int dAcc_no, opt;

    cout << "Enter your name: ";
    cin >> dname;
    cout << "Enter your account number: ";
    cin >> dAcc_no; // Corrected input prompt
    cout << "Enter your password: ";
    cin >> dpass;

    // Check credentials
    if (dname == name && dAcc_no == Acc_no && dpass == pass) {
        cout << "Access Granted !!!" << endl;

        while (true) { // Changed condition to true for continuous operation
            cout << "\nSelect any of the options:" << endl;
            cout << "1. Check balance" << endl;
            cout << "2. Credit Balance in your account" << endl;
            cout << "3. Debit Balance from your account" << endl;
            cout << "4. Logout of your account" << endl;
            cin >> opt;

            try {
                if (opt == 1) {
                    P.Display();
                } else if (opt == 2) {
                    P.Credit(77777); // Example credit amount
                } else if (opt == 3) {
                    int debitAmount;
                    cout << "Enter amount to debit: ";
                    cin >> debitAmount;
                    P.Debit(debitAmount);
                } else if (opt == 4) {
                    break; // Exit loop to logout
                } else {
                    cout << "Invalid option! Please try again." << endl;
                }
            } catch (const char* msg) { // Catching the exception
                cerr << msg << endl; // Print error message
            }
        }
    } else {
        cout << "Access Denied !!!" << endl;
    }

    return 0; // Return 0 to indicate successful execution
}
