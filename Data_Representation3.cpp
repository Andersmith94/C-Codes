#include <iostream>
#include <iomanip>

using namespace std;

 
int main()
{
    //Set Variable
    int num;
    
    //Request Input
    cout << "Input a positive integer: ";
    cin >> num;
    
    //If statement to check if number is positive
    if (num>0) {
        //If yes then prints number and the hexadecimal
        cout << "Your number is: " << num << endl;
        cout << "The Hexadecimal of your number is: " << hex << uppercase << num << endl;
    }
    //If not positive number prints an error message
    else {
        cout << "Invalid Entry. Please input a positive integer: " << endl;
    } 
        
    return 0;
}