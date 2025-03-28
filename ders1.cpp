#include <iostream>
#include <string>
using namespace std;

struct Book {
    string name;
    int isbn;
    bool borrowed = false;

    void Return() {
        if (!borrowed) {
            cout << "This book was not borrowed." << endl;
        } else {
            cout << "You have returned the book." << endl;
            borrowed = false;
        }
    }

    void Print() {
        cout << "Book Name: " << name << endl;
        cout << "ISBN: " << isbn << endl;
        cout << "Status: " << (borrowed ? "Borrowed" : "Available") << endl;
    }

    void Borrow() {
        if (borrowed) {
            cout << "This book has already been borrowed." << endl;
        } else {
            cout << "You have borrowed the book." << endl;
            borrowed = true;
        }
    }
};

struct Library {
    Book books[5];

    void List() {
        cout << "\nBook List:\n";
        cout << "# | Book Name          | Borrow Status\n";
        cout << "-------------------------------------\n";
        for (int i = 0; i < 5; i++) {
            cout << i << " | " << books[i].name << " | " 
                 << (books[i].borrowed ? "Borrowed" : "Available") << "\n";
        }
    }
};

int main() {
    Library library;
    
    library.books[0] = {"C++ Basics", 101, false};
    library.books[1] = {"Java Fundamentals", 102, false};
    library.books[2] = {"Python 101", 103, false};
    library.books[3] = {"JavaScript Guide", 104, false};
    library.books[4] = {"Data Structures", 105, false};

    library.List();

    cout << "\nBorrowing book at index 2:\n";
    library.books[2].Borrow();
    library.List();

    cout << "\nReturning book at index 2:\n";
    library.books[2].Return();
    library.List();

    return 0;
}
