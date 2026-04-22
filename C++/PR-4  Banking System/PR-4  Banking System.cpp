#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string name;
    int accountNum;
    float balance;

public:
    // Naya account banane ke liye constructor
    BankAccount(string n, int acc, float bal) {
        name = n;
        accountNum = acc;
        balance = bal;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "\nKamyabi se " << amount << " jama ho gaye. Naya balance: " << balance << endl;
    }

    void withdraw(float amount) {
        if (amount > balance) {
            cout << "\nMaaf kijiye, aapke account mein paryapt balance nahi hai!" << endl;
        } else {
            balance -= amount;
            cout << "\nKamyabi se " << amount << " nikale gaye. Naya balance: " << balance << endl;
        }
    }

    void display() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Naam: " << name << endl;
        cout << "Account Number: " << accountNum << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    string name;
    int accNum;
    float initialDeposit;

    cout << "--- Bank Management System mein Swagat Hai ---" << endl;
    cout << "Apna Naam likhein: ";
    getline(cin, name);
    cout << "Account Number chunein: ";
    cin >> accNum;
    cout << "Pehli baar kitne paise jama karne hain? ";
    cin >> initialDeposit;

    BankAccount userAcc(name, accNum, initialDeposit);

    int choice;
    do {
        cout << "\n1. Deposit (Jama karein)\n2. Withdraw (Nikaalein)\n3. Display Balance\n4. Exit" << endl;
        cout << "Apna vikalp chunein (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                float dAmount;
                cout << "Kitne paise jama karne hain? ";
                cin >> dAmount;
                userAcc.deposit(dAmount);
                break;
            case 2:
                float wAmount;
                cout << "Kitne paise nikalne hain? ";
                cin >> wAmount;
                userAcc.withdraw(wAmount);
                break;
            case 3:
                userAcc.display();
                break;
            case 4:
                cout << "Dhanyawad!" << endl;
                break;
            default:
                cout << "Galat option!" << endl;
        }
    } while (choice != 4);

    return 0;
}
