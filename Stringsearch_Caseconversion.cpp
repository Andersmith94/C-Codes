#include<iostream>
#include <string>
using namespace std;

int main()
{
    
    //Gather data
    string paragraph;
    string word;
    cout << "Enter a paragraph: ";
    getline (cin, paragraph);
    cout << "Enter a word to search for: ";
    getline (cin, word);
    
    //Find the word
    size_t position = paragraph.find(word);
    if (position != string::npos)
    {
        cout << word << " found at position: " << position << endl;
    } else {
        cout << "Word not found." << endl;
    }
    
    //Convert to Uppercase
    for (char& c: paragraph) {
        c = toupper(static_cast<unsigned char>(c));
}
    cout << "Paragraph in Uppercase: " << paragraph << endl;
    


    return 0;
}
