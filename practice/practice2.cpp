#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<unordered_map>
#include<deque>
using namespace std;
class Books
{ public:
    static vector<Books> bookList;
    string ISBN;
    string book_name;
    string is_checked_out_str;
    bool is_checked_out;
    void Read()
    {
        ifstream file("books.csv");
        string line;
        getline(file, line);
        while (getline(file, line))
        {   Books book;
            stringstream ss(line);
            getline(ss, book.ISBN, ',');
            getline(ss, book.book_name, ',');
            getline(ss, book.is_checked_out_str);
            book.is_checked_out = (book.is_checked_out_str == "true");
            bookList.push_back(book);
        }
    }
    
    void addBook()
    {
        
    }
    
    void RemoveBook()
    {
        
    }
    
    void Borrow()
    {
        
    }
    
    void ReturnBook()
    {
        
    }
};

vector<Books> Books::bookList;

void checkBookList() {
    cout << "Number of books in list: " << Books::bookList.size() << endl;
    
    for(size_t i = 0; i < Books::bookList.size(); i++) {
        cout << "Book " << i+1 << ":" << endl;
        cout << "  ISBN: " << Books::bookList[i].ISBN << endl;
        cout << "  Title: " << Books::bookList[i].book_name << endl;
        cout << "  Checked Out Status: " << Books::bookList[i].is_checked_out_str << endl;
    }
}
class Users
{
    public:
    static vector<Users> userList;
    string user_id;
    string name;
    string email;
    void Read()
    {
        ifstream file2("users.csv");
        Users user;
        string line2;
        getline(file2, line2);
        while (getline(file2, line2))
        {
            stringstream ss2(line2);
            getline(ss2, user.user_id, ',');
            getline(ss2, user.name, ',');
            getline(ss2, user.email);
            userList.push_back(user);
        }
    }

    void ShowBorrowed()
    {

    }
};

vector<Users> Users::userList;

void checkUserList() {
    cout << "Number of users in list: " << Users::userList.size() << endl;
    
    for(size_t i = 0; i < Users::userList.size(); i++) {
        cout << "User ID = " << i+1 << ":" << endl;
        cout << "  name: " << Users::userList[i].name << endl;
        cout << "  email: " << Users::userList[i].email << endl;
    }}

int main()
{
    Books book;
    Users user;
    int choice;
    book.Read();
    user.Read();
    cout << "What do you want to do?\n 1-(List Books)\n 2-(Borrow A Book)\n 3-(Return A Book) \n 4-(Donate A Book)\n 5-(List Users)\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        checkBookList();
        break;
    
    case 2:

        break;

    case 3:

        break;

    case 4:

        break;

    case 5:
        checkUserList();
        break;

    default:
        cout << "INVALID CHOICE!!!\n";
        break;
    }
    return 0;
}