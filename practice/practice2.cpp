#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

class Books
{ public:
    string ISBN;
    string book_name;
    bool is_checked_out;
    
    void Read()
    {
        ifstream file("books.csv");
        string line;
        getline(file, line);
        while (getline(file, line))
        {
            cout << line << endl;
        }
        
    }

    void addBook()
    {

    }
};

class Users
{public:
    
};

int main()
{
    Books book;
    book.Read();
    return 0;
}