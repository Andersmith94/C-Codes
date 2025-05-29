#include <iostream>
#include <string>
#include <stdexcept>
 
using namespace std;
 
//Create a class called book. 
class Book
{
//Create the private member variables.
private:
    string title, author, isbn;
    int year;
    bool checked_out;
    
public: //default constructor
//Set the variables to a default value.
    Book()
    {
        title= author= isbn="";
        year= 0;
        checked_out = false;
    }
//Create a constructor to set all variables when the object is created.
    Book(string _title, string _author, string _isbn, int _year)
    {
        title = _title;
        author = _author;
        isbn = _isbn;
        year = _year;
        checked_out = false;
    }
//Create a copy constructor to create a new instance of the book.
    Book(const Book& c)
    {
        title = c.title;
        author = c.author;
        isbn = c.isbn;
        year = c.year;
        checked_out = c.checked_out;
    }
//overload equality operator. To compare the isbn.
    bool operator == (Book c)
    {
        return isbn == c.get_isbn();
    }
//overload assignment operator. Copies data from one book to another.
    Book& operator = (const Book& other)
    {
        title= other.title;
        author= other.author;
        isbn= other.isbn;
        year= other.year;
        checked_out = other.checked_out;
        return *this;
    }
//getters. To retrieve isbn and year.
    string get_isbn() const{ return isbn; }
    int get_year() const{ return year; }
 
//method chaining setters
    Book& set_title(string t){title = t; return *this;}
    Book& set_author(string a){author = a; return *this;}
    Book& set_isbn(string i){isbn = i; return *this;}
    Book& set_year(int y){year = y; return *this;}
    Book& set_checked_out(bool c){checked_out = c;return *this;}
 
//Set checked_out to true.
    void check_out()
    {
        checked_out = true;
    }
    
//Set checked_out to false.
    void return_book()
    {
        checked_out = false;
    }

//Function to display book information.
    void display() const
    {
        cout << "\nAuthor: " << author << ". Title: " << title << ". isbn: " << isbn << ". year: " << year << ". Checked out: " << (checked_out ? "Yes" : "No") << endl;
    }
   
};

//Create a library class.
class Library
{
//Create the private variables
private:
    string owner;
    Book Inventory[100];
    int capacity=100;
    int num_Books = 0;
 
public:
//Function to add a book to the library inventory. Displays message once added or if ibventory is full.
    void add_book(Book b)
    {
        if (num_Books + 1 <= capacity)
        {
            Inventory[num_Books] = b;
            num_Books++;
            cout << "\nAdded a Book to the inventory" << endl;
            cout << "There are now " << num_Books << " books in the library with a capacity of " << capacity << "." << endl;
        } else
        {
            throw runtime_error("\nLibrary_full");
        }
    }

//Function to display the books in the library.    
    void display_info() const
    {
        cout << "\nLibrary Inventory: " << num_Books << " books:\n";
        for (int i = 0; i <num_Books; i++)
        {
            cout << i + 1 << ". ";
            Inventory[i].display();
        }
        
    }
    
};
 
int main()
{

//Create a library.    
    Library myLibrary;

//Create BOOK objects.    
    Book book1;
    book1.set_title("How to Code").set_author("Mr. Programmer").set_isbn("asdf").set_year(2024).set_checked_out(true);
 
    Book book2;
    book2.set_title("Coding for Dummies").set_author("Mr. Dummy").set_isbn("qwerty").set_year(2022).set_checked_out(false);
    
    Book book3;
    book3.set_title("Eating Pie").set_author("I have a problem").set_isbn("stuf").set_year(2014).set_checked_out(false);

//Display book 1 & 2 information before change.     
    cout << "\nBook 1 info:";
    book1.display();
    cout << "\nBook 2 info:";
    book2.display();
    
//compares books 1 and 2.       
    if (book1 == book2){
        cout << "\nBook 1 and Book 2 are the same (same ISBN)." << endl;
    } else {  
        cout << "\nBook 1 and Book 2 are different." << endl;
    }    

//Change book 2 information and alter the title.    
    book2 = book1;
    book2.set_title("How to Code: Duluxe Eddition");

//Display book 1 & 2 with new altered information.        
    cout << "\nBook 1 info after change:";
    book1.display();
    cout << "\nBook 2 info after change:";
    book2.display();
    
//compares books 1 and 2.       
    if (book1 == book2){
        cout << "\nBook 1 and Book 2 are the same (same ISBN)." << endl;
    } else {  
        cout << "\nBook 1 and Book 2 are different." << endl;
    }    

//Add each book to the library.
    myLibrary.add_book(book1);
    myLibrary.add_book(book2);
    myLibrary.add_book(book3);

//Display the library information. 
    myLibrary.display_info();
    return 0;
}