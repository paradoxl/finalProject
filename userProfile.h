#ifndef userProfile_h
#define userProfile_h

#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>

using namespace std;

class user_Profile {
    
public:
    string getName;
    double getWeight;
    double getHeight;
    int getAge;
    string getSex;
    int carbGoal;
    int proteinGoal;
    int fatGoal;
    int carbIntake;
    int proteinIntake;
    int fatIntake;

    
user_Profile()
{
    cout << setw(80) << setfill('-') << "" << setfill(' ') << endl;
    cout << endl << setw(25) << "" << "Hello, tell us about yourself" << endl << endl;
    cout << "Please enter your first name: ";
    cin >> getName;
    cout << "Please enter your weight: ";
    cin >> getWeight;
    cout << "Please enter your height: ";
    cin >> getHeight;
    cout << "Please enter your age: ";
    cin >> getAge;
    cout << "Please enter your sex: ";
    cin >> getSex;
    cout << "\n";
    cout << setw(80) << setfill('-') << "" << setfill(' ') << endl;
    cout << endl << setw(25) << "" << "Lets get to know your goals!" << endl << endl;
    cout << "What is your protien goal: ";
    cin >> proteinGoal;
    cout << "What is your carb goal: ";
    cin >> carbGoal;
    cout << "What is your fat goal: ";
    cin >> fatGoal;
    cout << "\n";
    cout << setw(80) << setfill('-') << "" << setfill(' ') << endl;
    cout << endl << setw(25) << "" << "What is your current intake?" << endl << endl;
    cout << "Protein intake currently: ";
    cin >> proteinIntake;
    cout << "Carb intake currently: ";
    cin >> carbIntake;
    cout << "Fat  intake currently: ";
    cin >> fatIntake;
    cout << "\n";
}
    
};

#endif 
