#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Ticket ki details store karne ke liye class
class Ticket {
public:
    int trainNo;
    string passengerName;
    int age;
    string boardingPoint;
    string destination;
    bool isBooked;

    Ticket() : isBooked(false) {}

    void bookTicket(int tNo, string name, int a, string start, string end) {
        trainNo = tNo;
        passengerName = name;
        age = a;
        boardingPoint = start;
        destination = end;
        isBooked = true;
        cout << "\n--- Ticket Successfully Booked! ---" << endl;
    }

    void displayTicket() {
        if (isBooked) {
            cout << "\n--- Ticket Details ---" << endl;
            cout << "Train No: " << trainNo << endl;
            cout << "Passenger: " << passengerName << endl;
            cout << "Age: " << age << endl;
            cout << "Route: " << boardingPoint << " to " << destination << endl;
        } else {
            cout << "\nTicket not found!" << endl;
        }
    }

    void cancelTicket() {
        if (isBooked) {
            isBooked = false;
            cout << "\nTicket Cancelled Successfully!" << endl;
        } else {
            cout << "\nNo booking found to cancel." << endl;
        }
    }
};

int main() {
    vector<Ticket> reservations;
    int choice;

    while (true) {
        cout << "\n--- Railway Reservation System ---";
        cout << "\n1. Book Ticket";
        cout << "\n2. View Ticket";
        cout << "\n3. Cancel Ticket";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            Ticket t;
            int tNo, age;
            string name, start, end;
            cout << "Enter Train No: "; cin >> tNo;
            cout << "Enter Passenger Name: "; cin.ignore(); getline(cin, name);
            cout << "Enter Age: "; cin >> age;
            cout << "Enter Boarding Point: "; cin >> start;
            cout << "Enter Destination: "; cin >> end;
            t.bookTicket(tNo, name, age, start, end);
            reservations.push_back(t);
        } 
        else if (choice == 2) {
            if (reservations.empty()) cout << "\nNo tickets booked yet.";
            else {
                for (int i = 0; i < reservations.size(); i++) {
                    cout << "\nID: " << i;
                    reservations[i].displayTicket();
                }
            }
        } 
        else if (choice == 3) {
            int id;
            cout << "Enter Ticket ID to cancel: "; cin >> id;
            if (id < reservations.size()) {
                reservations[id].cancelTicket();
            } else {
                cout << "Invalid ID!";
            }
        } 
        else if (choice == 4) {
            break;
        } 
        else {
            cout << "Invalid choice! Try again.";
        }
    }
    return 0;
}
