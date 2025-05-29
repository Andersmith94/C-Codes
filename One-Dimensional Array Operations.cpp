#include<iostream>
using namespace std;

int main()
{
    //Code to print array
        //Array of numbers
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        cout << "Array is: ";
        
        //For loop to print the array,
    for (int i=0; i<10; i++)
    {
        cout << numbers[i] << ", ";
    }
    
    //Code to search array for number
        //Variables
    int target;
    bool found = false;
        //Gather user data and store
    cout << "\nEnter a number to search for in the array: ";
    cin >> target;
        //For loop to search array for target
        for (int i = 0; i < 10; i++)
    {
        if (numbers[i] == target)
        {
            cout << "Number found at index: " << i << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Number not found." << endl;
    }
    
    //Code to add and print the sum of all elements in the array
        //Variables
    int sum = 0;
        //Loop to find sum of array
    for (int i = 0; i < 10; i++){
        sum += numbers[i];
    }
    cout << "The sum of the array is: " << sum << "." << endl;
    
    //Code to update number in array.
        //Variables
    int index;
    int value;
        //Gather index to change and assign to variable
    cout << "Please enter an index number between 0-9: ";
    cin >> index;
        //Gather new value to place in selected index
    cout << "Enter a new value for that index: ";
    cin >> value;
        //assign new value to selected index
    numbers[index] = value;
        
        //For loop to print the array,
    cout << "Updated array is: ";
    for (int i=0; i<10; i++)
    {
        cout << numbers[i] << ", ";
    }
    
    return 0;
}
