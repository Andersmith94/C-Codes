#include<iostream>
#include <limits>
using namespace std;

int main()
{
    //Variables
    int score;
    
        //Gather User Input
    while (true) {
        cout << "Enter your exam score(0-100): ";
        cin >> score;
        
        //Validate data
            //Checks if data has correct paramaters
        if (cin.fail() || score < 0 || score > 100 ) {
            //Clears error flag.
        cin.clear();
            //Removes the invalid data from buffer. 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        //Prompt for correct input
        cout << "Invalid Input. Try again. " << endl;
        } else
        {   //Breaks the loop and continues the program if Valid data is input.
            break; 
        }
    }
    
    //Analyzes data and prints the appropriate grade.
    if (score >= 90 && score <=100)
    {
        cout << "\t" << "Your exam grade is: A!" << endl;
    } else if (score >=80 && score<=89)
    {
        cout << "\t" << "Your exam grade is: B" << endl;
    } else if (score >=70 && score <=79)
    {
        cout << "\t" << "Your exam grade is: C" << endl;
    } else if (score >=60 && score <=69)
    {
        cout << "\t" << "Your exam grade is: D" << endl;
    } else
    {
        cout << "\t" << "Your grade is: F" << endl;
    }
    
    
    return 0;
}
