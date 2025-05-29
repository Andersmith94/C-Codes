#include <iostream>
#include <bitset>
using namespace std;

//Function to print hte binary of a number
void printBinary(int n){
    if (n >1)
        printBinary(n/2);
    cout << n % 2;
} 

int main()
{
    //Variable for number
    int num;
    
    //Gathering the input
    cout << "Input a positive integer: " << endl;
    cin >> num;
    
    //If statement to verify if a number is positive
    if (num>0) {
        //prints message and binary of the number
        cout << "\nYour number is: " << num << endl;
        cout << "The Binary of your number is: ";
        printBinary(num);
    }
    //if number is not positive or invalid prints an error message.
    else {
        cout << "Invalid Entry. Please input a positive integer: " << endl;
    } 

    return 0;
}