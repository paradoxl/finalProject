#ifndef FOODLOG_H
#define FOODLOG_H

#include <iostream>

using namespace std;


template <class elemType>
class foodLogType {
public:
    void macro(int carbs, int protein, int fat);

    foodLogType();
    // Default constructor

    ~foodLogType();
    // Destructor

};

template <class elemType>
void foodLogType :: macro(int, int , int ) {
    ifstream infile;

    infile.open(food.txt);

    if (!infile) {
        cout << "Cannot open input file." << endl;
        return;
    }

    string foodName;
    float carbs;
    float protein;
    float fat;
    if (infile.is_open() {
        for (int i = 0; i < fileSize; i++) {
            infile >> foodName;
            infile >> carbs;
            infile >> protein;
            infile >> fat;

            cout << foodName << " " << carbs << " " << protein << " " << fat << " " <<endl;
        }
    }

    infile.close();
}

template<class elemType>
foodLogType<elemType>::foodLogType() {

}

template<class elemType>
foodLogType<elemType>::~foodLogType() {

}

#endif //FOODLOG_H
