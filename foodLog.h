#ifndef FOODLOG_H
#define FOODLOG_H

#include <iostream>
#include <fstream>

using namespace std;

template <class elemType>
class foodLogType
{
public:
    void macro();

    foodLogType();
    // Default constructor

    ~foodLogType();
    // Destructor
};

template <class elemType>
void foodLogType<elemType>::macro()
{
    ifstream inFile;

    inFile.open("food.txt");

    if (!inFile)
    {
        cout << "Cannot open input file." << endl;
        return;
    }
    string search;

    cout << "Which food would you like to search" << endl;
    cin >> search;

    string foodName;
    string carbs;
    string protein;
    string fat;
    int curLine;
    string line;
    string temp;
    bool searchFinished;

    while (getline(inFile, line))
    {

        if (line.find(search, 0) != string::npos)
        {
            cout << "found: " << search << " Macronutrients " << line << endl;
            searchFinished = true;
        }
    }

    while (getline(inFile, line))
    {

        inFile >> temp;
        if (temp == search)
        {
            foodName = temp;
            inFile >> protein;
            inFile >> carbs;
            inFile >> fat;
        }
    }

    inFile.close();

    cout << "If we are displaying multiple results please refine your search below" << endl;
    cout << "Please press Y to refine search" << endl;
    cout << "Please Press N to confirm selection" << endl;
    string refine;
    cin >> refine;

    if (refine == "y" || refine == "Y")
    {
        ifstream inFile;
        string search2;
        inFile.open("food.txt");
        cin >> search2;
        while (getline(inFile, line))
        {
            inFile >> temp;
            if (temp == search2)
            {
                foodName = temp;
                inFile >> protein;
                inFile >> carbs;
                inFile >> fat;
            }
            curLine++;
            if (line.find(search2, 0) != string::npos)
            {
                cout << "found: " << search2 << " Macronutrients " << line << endl;
            }
        }
        inFile.close();
    }

    else if (refine == "n" || refine == "N")
    {
        cout << "Thanks for adding that food!" << endl;
    }
    else
    {
        cout << "incorrect input" << endl;
    }

    inFile.close();






    /*                         Adds new food to database                            */

    ofstream myFile("food.txt", ios::app);
    if (myFile.is_open())
    {

        cout << "If the item you are looking for is not in our database please type Y below" << endl;
        string addy;
        cin >> addy;

        if (addy == "y" || addy == "Y")
        {
            cout << "Please enter the food name followed by the protein, carbs, and fats." << endl;
            string newFood;
            string newProtein;
            string newCarbs;
            string newFats;

            cout << "New Food Name: " << endl;

            cin >> newFood;
            cout << "New Food's protein: " << endl;

            cin >> newProtein;
            cout << "New Food's carbs: " << endl;
            cin >> newCarbs;

            cout << "New Food's Fat: " << endl;
            cin >> newFats;
            myFile << newFood << " " << newProtein << " " << newCarbs << " " << newFats << endl;
        }
    }
    else
    {
        cout << "unable to open file" << endl;
    }
}

template <class elemType>
foodLogType<elemType>::foodLogType()
{
}

template <class elemType>
foodLogType<elemType>::~foodLogType()
{
}

#endif //FOODLOG_H
