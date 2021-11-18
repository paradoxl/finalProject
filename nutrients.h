#include <iostream>
using namespace std;


void nutrientCalculation(float &protein, float &carbs, float &fats,
 float &goalP, float &goalC, float &goalF, float &totalCalories){
    float totalProtein;
    float totalCarbs;
    float totalFats;
    


    totalProtein = totalProtein + (protein * 9);
    totalCarbs = totalCarbs + (carbs * 4);
    totalFats = totalFats + (fats * 9);

    goalP = goalP - totalProtein;
    goalC = goalC - totalCarbs;
    goalF = goalF - totalFats;

    totalCalories = (totalProtein * 9) + (totalCarbs * 4) + (totalFats *4);
    //todo subtract from goal
    

}

void printNutrients(float goalP, float goalC, float goalF, float totalCalories){
    cout << goalP << " Protein Remaining" <<endl;
    cout << goalC << " Carbs Remaining" << endl;
    cout << goalF << " Fats Remaining" <<endl;
    cout << totalCalories << " Calories Remaining" <<endl;
}