#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>  // For formatting
using namespace std;

int main() {
    //Call the txt file
    ifstream file("2025_Movies.txt");
    
    //An if statement for when the file won't open
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    
    //Set Variables
    string Title;
    int Stars;

    //Print title and break proper spacing
    cout << "2024-25 Animated Movie Reviews: " << endl;
    cout << "------------------------------" << endl;

    //A While statement to retrieve the information. Call the file and assign the variables.
    while (file >> Title >> Stars) {
        //Set the formatting and print info.
        cout << left << setw(50) << Title << " | ";

        // Print a star for every star rating
        int numStars = Stars;
        
        //Loop to print the stars
        for (int i = 0; i < numStars; i++) {
            cout  << "*";
        }
        
        //Final Print Statement
        cout  << " (" << Stars << "/5)" << endl;
    }

    file.close();
    return 0;
}
