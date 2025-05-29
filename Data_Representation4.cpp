#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;

int main()
{
    //Variable for index
    int i;
    //Variable to format table
    int n = 10;
    
    //Message to set column titles
    cout << left << setw(n) << "CHAR" 
         << "| " << setw(n) << "BINARY" 
         << "| " << setw(n) << "ASCII" 
         << "| " << setw(n) << "HEX" << endl;
    //Line Break
    cout << "----------------------------------------" << endl;
    //For loop to show all printable characters and output them as CHAR, Binary, ASCII, and HEX. Also sets column width.
    for (i=33; i<127; i++){
        cout << left << setw(n) << char(i) << "| "
             << setw(n) << bitset<8>(i) << "| "
             << setw(n) << int(char(i)) << "| "
             << setw(n) << hex << uppercase << i << endl; 
    }
        //Line Break
        cout << "---------------------------------------" << endl;
    
    return 0;
}