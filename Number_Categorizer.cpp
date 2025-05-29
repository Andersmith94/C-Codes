#include<iostream>
#include <limits>
using namespace std;

int main()
{
    //Variables.
    int Number;
    cout << "Enter a number?";
    
    //Validate Input. This was HARD and CONFUSING, but I think I understand how it works.
    while (!(cin >> Number)) {
    cout << "\t" << "Invalid Input. Please enter a valid number: " << endl;
            //Clears error flag.
        cin.clear();
            //Removes the invalid data from buffer. 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    //Check if number is Positive, Negative, or Zero.
    if (Number > 0)
    {
        cout << "\t" << Number << " is positive." << endl;
    } else if (Number < 0)
    {
        cout << "\t" << Number << " is negative." << endl;
    } else
    {
        cout << "\t" << Number << " is zero." << endl;
    }
    
    //Check if number is Even or Odd.
    if (Number % 2 ==0)
    {
        cout << "\t" << Number << " is even" << endl;
    } else
    {
        cout << "\t" << Number << " is odd." << endl;
    }
    
    //Check if number is divisible by 5.
    if (Number % 5 ==0)
    {
        cout << "\t" << Number << " is divisible by 5." << endl;
    } else
    {
        cout << "\t" << Number << " is not divisible by 5." << endl;
    }
    return 0;
}
