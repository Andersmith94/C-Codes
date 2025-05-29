#include<iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    //Gather variables
    string sentence;
    cout << "Enter a sentence: ";
    getline (cin, sentence);
    
    //Character count
    cout << "Character count: " << sentence.length() << endl;
    
    //Word count
    istringstream stream (sentence);
    string Word;
    int WordCount = 0;       //word counter
    while (stream >> Word) { //loop to get number of words in the sentence
        WordCount++;
    }
    cout << "Number of words: " << WordCount << endl;
    
    //Formatted sentence.
    for (char& c: sentence) {
        if (c == ' ') { //Detects spaces in Sentence
            c = '_';    //Replaces spaces with _
        }
    }
    
    //New formatted sentence
    cout << "Formatted Sentence: " << sentence << endl; 
    
    //Tabbed Sentence
    cout << "Tabbed sentence: " << "\t" << sentence << endl;
    
    return 0;
}
