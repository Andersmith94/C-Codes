#include <iostream>
#include <iomanip>
#include <bitset>
 
using namespace std;
 
int main()
{
    //Set Variables
    char myChar;
    
    //Gather input
    cout << "Input a Character: " << endl;
    cin >> myChar;
    
    //If statement to check if input is a character
    if(isalpha(myChar)){
        //If yes then prints ASCII and Binary of the character
        cout << "The ASCII value of -" << myChar << "- is: " << int(myChar) << endl;
        cout << "The binary value of -" << myChar << "- is: " << bitset<8>(myChar) << endl;
    }
    else {
        //If not then prints an error message
        cout << "Invalid Entry. Please input a Single Character.";
    }
    
    return 0;
}