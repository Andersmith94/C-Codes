#include<iostream>
using namespace std;

int main()
{
    //The array layout
    int magic_rectangle[3][5] = {
        {6, 7, 8, 9, 10},
        {13, 3, 1, 11, 12},
        {0, 14, 15, 4, 0}  // Zeros are missing values
    };
    
    //Loop to print the array
        cout << "The array values are: " << endl;
    //outer loop is columns, inner loop is rows.
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            cout << magic_rectangle[i][j] << " ";
        }
        cout << endl;
        }
        
    //Update the array values    
    magic_rectangle[2][0] = 5;
    magic_rectangle[2][4] = 2;
    
    //Loop to print new array
        cout << "\nThe updated array values are: " << endl;
    //outer loop is columns, inner loop is rows.
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            cout << magic_rectangle[i][j] << " ";
        }
        cout << endl;
        }    
    
    //Variables for rows
    int sumR1 = 0, sumR2 = 0, sumR3 = 0;
        
    //Loop to find sum of rows
    for (int j = 0; j < 5; j++){
        sumR1 += magic_rectangle[0][j];
        sumR2 += magic_rectangle[1][j];
        sumR3 += magic_rectangle[2][j];
    }
    cout << "\nThe sum of the rows are:" << endl;
    cout << "Row 1 = " << sumR1 << endl;
    cout << "Row 2 = " << sumR2 << endl;
    cout << "Row 3 = " << sumR3 << endl;
    
    //Variables for columns
    int sumC1 = 0, sumC2 = 0, sumC3 = 0, sumC4 = 0, sumC5 = 0;
        
    //Loop to find sum of columns
    for (int i = 0; i < 3; i++){
        sumC1 += magic_rectangle[i][0];
        sumC2 += magic_rectangle[i][1];
        sumC3 += magic_rectangle[i][2];
        sumC4 += magic_rectangle[i][3];
        sumC5 += magic_rectangle[i][4];    
    }  
    cout << "\nTHe sum of the columns are: " << endl;
    cout << "Column 1 = " << sumC1 << endl;    
    cout << "Column 2 = " << sumC2 << endl;
    cout << "Column 3 = " << sumC3 << endl;
    cout << "Column 4 = " << sumC4 << endl;
    cout << "Column 5 = " << sumC5 << endl;
    
    return 0;
}
