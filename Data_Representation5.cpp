#include <iostream>
using namespace std;
 
int main(){
    //Set Variables
    char First_Initial = 'A';
    int age = 30;
    double weight = 180.5;
    
    //Prints the variable, then prints the memory location of the variable as hexidecimal
    cout << "The Address of " << First_Initial << " = " << static_cast<void*>(&First_Initial) << endl;
    cout << "The Address of " << age << " = " << &age << endl;
    cout << "The Address of " << weight << " = " << &weight << endl;
    
    return 0;
}