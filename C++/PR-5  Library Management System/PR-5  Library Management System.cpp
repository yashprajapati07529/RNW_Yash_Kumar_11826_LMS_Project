#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book {
public:
    int id;
    string title;
    string author;

    Book(int i, string t, string a) {
        id = i;
        title = t;
        author = a;
    }

    void displayBook() {
        cout << "ID: " << id << " | Title: " << title << " | Author: " << author << endl;
    }
};

int main() {
    vector<Book> library;
    int choice;

    cout << "--- Library Management System ---" << endl;

    do {
        cout << "\n1. Nayi Kitab Add Karein\n2. Sabhi Kitabein Dekhein\n3. Kitab Dhundein (ID se)\n4. Exit" << endl;
        cout << "Apna vikalp chunein: ";
        cin >> choice;

        if (choice == 1) {
            int id;
            string title, author;
            cout << "Book ID: "; cin >> id;
            cin.ignore(); // buffer saaf karne ke liye
            cout << "Title: "; getline(cin, title);
            cout << "Author: "; getline(cin, author);
            
            library.push_back(Book(id, title, author));
            cout << "Kitab kamyabi se add ho gayi!" << endl;

        } else if (choice == 2) {
            cout << "\n--- Library ki Kitabein ---" << endl;
            if (library.empty()) cout << "Library khali hai." << endl;
            for (int i = 0; i < library.size(); i++) {
                library[i].displayBook();
            }

        } else if (choice == 3) {
            int searchId;
            bool found = false;
            cout << "Dhundne ke liye Book ID likhein: ";
            cin >> searchId;
            for (int i = 0; i < library.size(); i++) {
                if (library[i].id == searchId) {
                    cout << "Kitab mil gayi: ";
                    library[i].displayBook();
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Is ID ki koi kitab nahi hai." << endl;
        }

    } while (choice != 4);

    cout << "Program khatam ho raha hai. Alvida!" << endl;
    return 0;
}
