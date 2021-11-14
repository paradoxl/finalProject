#ifndef loadingUser_h
#define loadingUser_h

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string>
#pragma

using namespace std;

int main(){
    
string name;
double weight;
double height;
int age;
string sex;
    
int Goalcarb;
int Goalprotein;
int Goalfat;

int intakeCarb;
int intakeProtein;
int intakeFat;

double breakfast;
double lunch;
double dinner;


//loading a users profile
    cout << setw(70) << setfill('-') << "" << setfill(' ') << endl;
    cout << endl << setw(25) << "" << "Hello, tell us about yourself" << endl << endl;
    cout << "Please enter your first name: ";
    cin >> name;
    cout << "Please enter your weight: ";
    cin >> weight;
    cout << "Please enter your height: ";
    cin >> height;
    cout << "Please enter your age: ";
    cin >> age;
    cout << "Please enter your sex: ";
    cin >> sex;
    cout << "\n";
    
    cout << setw(80) << setfill('-') << "" << setfill(' ') << endl;
    cout << endl << setw(25) << "" << "Lets get to know your goals!" << endl << endl;
    cout << "What is your protien goal: ";
    cin >> Goalprotein;
    cout << "What is your carb goal: ";
    cin >> Goalcarb;
    cout << "What is your fat goal: ";
    cin >> Goalfat;
    cout << "\n";
    
    cout << setw(80) << setfill('-') << "" << setfill(' ') << endl;
    cout << endl << setw(25) << "" << "What is your current intake?" << endl << endl;
    cout << "Protein intake currently: ";
    cin >> intakeProtein;
    cout << "Carb intake currently: ";
    cin >> intakeCarb;
    cout << "Fat  intake currently: ";
    cin >> intakeFat;
    cout << "\n";

    cout << setw(80) << setfill('-') << "" << setfill(' ') << endl;
    cout << endl << setw(30) << "" << "When do you eat your meals?" << endl << endl;
    cout << "When did you eat breakfast: ";
    cin >> breakfast;
    cout << "When did you eat lunch: ";
    cin >> lunch;
    cout << "When did you eat dinner: ";
    cin >> dinner;
    cout << "\n";
    
    //not complete, need to add finishing touches later also might need to add to the main.cpp file with a print function
    cout << setw(80) << setfill('-') << "" << setfill(' ') << endl;
    cout << endl << setw(30) << "" << "Your Results:" << endl << endl;
    cout << "The amount of protein you should take daily is: " << endl;
    cout << "The amount of carbs you should take daily is: " << endl;
    cout << "The amount of fats you should take daily is: " << endl;
    cout << "\n";
}

#endif /* loadingUser_h */
