#ifndef FOODLOG_H
#define FOODLOG_H

#include <iostream>
#include <fstream>
#include <ostream>
#include <vector>
#include <algorithm>


using namespace std;

template <class elemType>
class foodLogType
{
public:
    void searchFood();
    void addItem();
    void removeItem();

    foodLogType();
    // Default constructor

    ~foodLogType();
    // Destructor
};

template <class elemType>
void foodLogType<elemType>::searchFood()
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
}

template <class elemType>
void foodLogType<elemType>::addItem()
{
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
void foodLogType<elemType>::removeItem()
{
        // Open the File
    std::ifstream in("food.txt");
    // Check if object is valid
  
    std::string str;
    vector<string> strVec;
    // Read the next line from File untill it reaches the end.
    while (std::getline(in, str))
    {
        // Line contains string of length > 0 then save it in vector
        if(str.size() > 0)
            strVec.push_back(str);
    }
    //Close The File
    in.close();

    string deleteItem;

    cout << "which item:"<<endl;
    cin >> deleteItem;
    for (int i =0; i <strVec.size(); i++){
        if (strVec.at(i) == deleteItem){
            strVec.clear();
        }
    }

    for (int i =0; i <strVec.size(); i++){
        cout << strVec.at(i)<<endl;
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


/*
code graveyard

  // int size = 40;
        // string array[size];
        // ifstream inFile ("food.txt");

        // if (inFile.is_open()){
        //     int size = 1000;
        //     string array[size];
        //     for (int i = 0; i < size; i++){
        //         inFile >> array[i];
        //     }

        //     string deleteItem;
        //     cout << "which food would you like to delete" <<endl;
        //     cin >>deleteItem;
        //     for (int j = 0; j < size; j++){
        //       if(deleteItem == array[j]){
        //           array[j] = "null"; //sets name protein carbs and fats to null.
        //           array[j+1] = "null";
        //           array[j+2] = "null";
        //           array[j+3] = "null";

        //       }
        //     }

        //     for (int a = 0; a < size; a++){
        //      cout << array[a]<<endl;
        //     }

        //      ofstream outFile ("foodTesting.txt");

        // if(outFile.is_open()){
        //     for (int i = 0; i < size; i++){

        //         outFile << array[i]<<endl;

        //     }

        // }

        //     //remove("food.txt");

        // }
        // inFile.close();

*/