#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;


//function to display greeting and quiz rules.
void printGreeting()
{
    cout << "Welcome to the Capitals quiz! You will be asked to list a country's capital city. Correct answers will earn a point, wrong answers will earn no points." << endl;
}

//function to check if users answer is correct
int checkAnswer(string guess, string correct){
    
    //transforms input to lowercase to account for case sensitivity
    transform(guess.begin(), guess.end(), guess.begin(), ::tolower);
    transform(correct.begin(), correct.end(), correct.begin(), ::tolower);
    if (guess == correct){
        cout << "Correct!" << endl; 
        return 1;
    }
    else{
        cout << "Wrong!" << endl;
        return 0; 
    }
}

int main()
{
    //score tracker
    int score = 0;
    
    //variables for the questions
    string question1;
    string question2;
    string question3;
    string question4;
    string question5;
 
    
    //print greeting
    printGreeting();
    
    //quiz questions 
    cout << "\nWhat is the capital of France? "; //Ask for input
    cin >> question1;                            //Apply input to variable
    cin.ignore();                                //Ignores any leftover characters
    score += checkAnswer(question1, "Paris");    //Calls function to check answer and update score.
    
    cout << "\nWhat is the capital of Russia? ";
    cin >> question2;
    cin.ignore();
    score += checkAnswer(question2, "Moscow");
    
    cout << "\nWhat is the capital of Germany? ";
    cin >> question3;
    cin.ignore();
    score += checkAnswer(question3, "Berlin");
    
    cout << "\nWhat is the capital of Japan? ";
    cin >> question4;
    cin.ignore();
    score += checkAnswer(question4, "Tokyo");
    
        cout << "\nWhat is the capital of Canada? ";
    cin >> question5;
    cin.ignore();
    score += checkAnswer(question5, "Ottawa");
    
    //Display score and ending message
    cout << "\nQuiz complete! Your score was " << score << " out of 5." << endl;

    return 0;
}
