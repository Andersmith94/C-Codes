#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    
    //Gather data
    string sentence;
    int number;
    cout << "Enter a sentenece: ";
    getline (cin, sentence);
    cout << "Enter a number: ";
    cin >> number;
    
    //substring
    string subString = sentence.substr(0, number);
    cout << "Substring: " << subString << endl;
    
    //Last character in substring
    int index = number;
    char Lchar = sentence.at(index - 1);
    cout << "Last Character in substring: " << Lchar << endl;
    
    //Reversed substring
    reverse(subString.begin(), subString.end());
    cout << "Reversed substring: " << subString << endl;

    return 0;
}
