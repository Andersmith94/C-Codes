#include<iostream>
#include <string>
using namespace std;

int main()
{
    string firstName, lastName;
    int age;
    
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << "Enter  your age: ";
    cin >> age;
    
    string fullName = firstName + " " + lastName;
    string profile = "Full profile: " + fullName + ", Age: " + to_string(age);
    
    cout << profile << endl;
    
    return 0;
}
