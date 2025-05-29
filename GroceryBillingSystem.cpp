
// Online IDE - Code Editor, Compiler, Interpreter
#include<cmath>
#include<iostream>
#include<iomanip>
using namespace std;


//Function to round to 2 decimal places during computation
double roundToTwo (double value) {
    return round (value * 100.0) / 100.0;
}

int main()
{
    //Variables
    string productName;
    double firstPrice;
    int quantity;
    float discountPercent;
    const double taxRate = 0.08;
    
    //Prompt the user for data
    cout << "Enter product name: " << endl;
    cin >> productName;

    cout << "Enter price per unit: " << endl;
    cin >> firstPrice;
    
    cout << "Enter units purchased: " << endl;
    cin >> quantity;
    
    cout << "Enter discount percentage: " << endl;
    cin >> discountPercent;
    
    //Compute the Subtotal
    double subTotal = roundToTwo (quantity * firstPrice);
    
    //Convert discount percent to decimal
    double discountDecimal = roundToTwo (discountPercent / 100);
    //Calculate discount ammount
    double ProductDiscount = roundToTwo (discountDecimal * subTotal);
    //Update Subtotal
    double finalSubtotal = roundToTwo (subTotal - ProductDiscount);
    
    //Calculate the sales Tax
    double FinalTax = roundToTwo (finalSubtotal * taxRate);
    
    //Calculate the final Total
    double finalTotal = roundToTwo (finalSubtotal + FinalTax);
    
    
    
    
    //Print the recipt
    cout << fixed << setprecision(2);
    cout << "Product: " << productName << endl;
    cout << "Subtotal: $" << subTotal << endl;
    cout << "Discount: -$" << ProductDiscount << endl;
    cout << "Tax (8%): +$" << FinalTax << endl;
    cout << "Total: " << finalTotal << endl;
    
    
    



    return 0;
}
