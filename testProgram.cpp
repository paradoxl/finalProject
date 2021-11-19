#include <iostream>
#include <string>

using namespace std;
void menu();
//Program Starts
int main(){
//App Opens
    char x;
    bool y;
    
    //Login Loop
    while (true)
    { 
        cout << "Please enter # of menu option: ";
        cout << "\n\t1. Login\n\t2. Sign up" << endl;
        cin >> x;
        if (x=='1')  {                          //Case 1: Login
            cout << "Enter Username: ";             //User prompted for login Information: Username
            cin >> y;                                    
            if (y/*Insert function to check username*/) //If user exists, jump to Nutrient Program    
                break;                              
            else                                        //Else, reject and break to Default Case    
                cout << "\n\tNo" << endl;
        }
        else if (x=='2'){                       //Case 2: Sign up
            cout << "Enter Username: ";             //User is prompted to enter a Username
            cin >> y;
            if(!y /*Function to check username*/)       //If user does not exists, jump to Nutrient Program
                break;
            else                                        //Else, reject and break to Default case
                cout << "User already exists. Please Login or Sign up with a different name." << endl;
        }
        else
            cout << "Action Not Allowed. " << endl;    //Default Case: Action Not Allowed. Return to Case Prompts
    } //end Login  

    //Nutrient Program 
    while(true){
            cout << "{Function to grab user info}" << endl;  //User presented their Nutrient information

            //Menu: User presented with menu options
            cout << "Please enter # of menu option: ";
            cout << "\n\t1. Add a meal\n\t2. Change Username\n\t3. Exit Program" << endl;     
            cin >> x;    
            if(x=='1'){                                     //Option 1: Add/Edit a meal
                cout << "Please enter food: ";                  //Prompt user for food
                cin >> y;
                if(y/*Insert function for food lookup*/)        //If food exists, add to User's Nutrient informations.
                    cout << "\n\t{Insert function for food lookup, add to User's Info}" << endl;
                else                                            //Else, notify user food does not exist
                    cout << "\n\t{Insert function for food lookup, notify Food doesn't exists}" << endl;
            }
            else if(x=='2'){
                cout << "Please enter new username: ";      //Option 2: Change Username
                cin >> y;
                if(!y/*Function to Look Up Username*/)
                    cout << "\n\t{Function to change username}Username updated!" << endl;
                else
                    cout << "\n\tUsername already exists. Try again." << endl;
            }
            else                                             //Option 3: Exit Program
                break;
    }

}

void menu(){

}
