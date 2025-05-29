#include<iostream>
using namespace std;


//Define Class
class Book
{
public:
        //Define Variables.
    string Title;
    string Author;
    int Pages;
    static int Book_Count;
        
        //Construsctor that initualizes title, author, and number of pages.
    Book(string title, string author, int pages)
    {
        Title = title;
        Author = author;
        Pages = pages;
    }
    
        //Void function that displays the information
    void displayInfo()
    {
        cout << "Title: " << Title << ". Author: " << Author << ". pages: " << Pages << endl;
    }
    
        //static integer to return the current number of books.
    static int GetBookCount()
    {
        return Book_Count;
    }
    
        //Static void function that tracks the number of books created.
    static void trackBook_Count()
    {
        Book_Count++;
    }
};

    //Initialize the counter at zero.
int Book::Book_Count = 0;


int main()
{
        //Create the first book and define arguments.
    Book myBook("How to Program", "Doctor Programmer", 500);
        //Call the counter to increment the count.
    Book::trackBook_Count();
        //Display appropriate info.
    myBook.displayInfo();
    
    Book myBook1("Debugging", "Doctor Bug", 1000);
    Book::trackBook_Count();
    myBook1.displayInfo();
    
        //Displays the current amount of books created.
    cout << "Total number of books: " << Book::GetBookCount() << endl;

    return 0;
}
