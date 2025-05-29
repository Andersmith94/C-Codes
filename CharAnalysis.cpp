#include<iostream>
using namespace std;

int main()
{
    //Variables
    char letter;
    cout << "Enter a single character: ";
    cin >> letter;
    
    cout << "You entered: " << letter << endl;
   
    //ASCII value
    cout << "ASCII value of: " << letter << " is: " << int(letter) << endl;
    
    //Identify character type and convert if neeeded
    if (isupper(letter)) {
        cout << "Character type: Uppercase" << endl;
        char toLowercase = tolower(letter);
        cout << "Converted to Lowercase: " << toLowercase << endl;
    }
    else if (islower(letter)) {
        cout << "Character type: Lowercase" << endl;
        char toUppercase = toupper(letter);
        cout << "Converted to Uppercase: " << toUppercase << endl;
    }
    else if (isdigit(letter)) {
        cout << "Character type: Digit" << endl;
    }
    else if (ispunct(letter)) {
        cout << "Character type: Special Character" << endl;
    }
    else {
        cout << "Invalid Input. Please input a single character." << endl;
    }
    
    
    return 0;
}
