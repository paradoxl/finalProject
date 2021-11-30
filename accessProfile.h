#ifndef accessProfile_h
#define accessProfile_h

#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>

#include "userProfile.h"

using namespace std;

class access_Profile {
    
public:
char userInput;
char userInput2;
string id;
string password;
string ID;
string PASSWORD;

    
access_Profile()
{
userInput = ' ';
userInput2 = ' ';
id = "?";
password = "?";
ID = "?";
PASSWORD = "?";
}
    
    
void SetupOption()
{
cout << "Please select an option: " << endl;
cout << "l -> Login " << endl;
cout << "c -> Create New Account " << endl;
cout << "q -> Quit " << endl;
cin >> userInput;
if (userInput == 'l' || userInput == 'L')
{
login();
}
else if (userInput == 'c' || userInput == 'C')
{
createAcnt();
}
else if (userInput == 'q' || userInput == 'Q')
{
quit();
}
}

    
int login()
{
cout << "Please enter your user id: " << endl;
cin >> id;
cout << "Please enter your password: " << endl;
cin >> password;
if (id == ID && password == PASSWORD)
{
cout << "Access Granted - " << ID << endl;
user_Profile();
}
else
{
cout << "******** " << "LOGIN FAILED! " << "********" << endl;
SetupOption();
}
return 0;
}


int createAcnt()
{
cout << "Please enter your username: " << endl;
cin >> id;
cout << "Please enter your password: " << endl;
cin >> password;
ID = id;
PASSWORD = password;
SetupOption();
return 0;
}
    
    
int quit()
{
cout << "Thanks for creating an account," << ID << "!" << endl;
system("pause");
return 0;
}

};

#endif
