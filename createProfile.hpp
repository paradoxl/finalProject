#ifndef createProfile_hpp
#define createProfile_hpp

#include <iomanip>
#include <iostream>
#include <string>
#include <stack>
#pragma

using namespace std;

template<typename A>
class createProfile:public std::stack<A>
{
public:
    createProfile(void);
    string getName;
    double getWeight;
    double getHeight;
    int getAge;
    string getSex;
};

template<typename A>
createProfile<A>::createProfile(void)
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
}

template<typename B>
class profileGoals:public std::stack<B>
{
public:
    
    profileGoals(int);
    int carbGoal;
    int proteinGoal;
    int fatGoal;
};

template<typename B>
profileGoals<B>::profileGoals(int)
{
    cout << setw(80) << setfill('-') << "" << setfill(' ') << endl;
    cout << endl << setw(25) << "" << "Lets get to know your goals!" << endl << endl;
    cout << "What is your protien goal: ";
    cin >> proteinGoal;
    cout << "What is your carb goal: ";
    cin >> carbGoal;
    cout << "What is your fat goal: ";
    cin >> fatGoal;
    cout << "\n";
}

template<typename C>
class profileIntake:public std::stack<C>
{
public:
    
    profileIntake(int);
    int carbIntake;
    int proteinIntake;
    int fatIntake;
};

template<typename C>
profileIntake<C>::profileIntake(int)
{
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

template<typename D>
class profileTime:public std::stack<D>
{
public:
    
    profileTime(double);
    double breakfastTime;
    double lunchTime;
    double dinnerTime;
};

template<typename D>
profileTime<D>::profileTime(double)
{
    cout << setw(80) << setfill('-') << "" << setfill(' ') << endl;
    cout << endl << setw(30) << "" << "When do you eat your meals?" << endl << endl;
    cout << "When do you eat breakfast: ";
    cin >> breakfastTime;
    cout << "When do you eat lunch: ";
    cin >> lunchTime;
    cout << "When do you eat dinner: ";
    cin >> dinnerTime;
    cout << "\n";
}

#endif 
