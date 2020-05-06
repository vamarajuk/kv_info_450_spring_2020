#pragma once
 

#include <iostream>
#include "Account.h"
using namespace std;

//const int LENGTH = 10;

class Checking : public Account
{
private:
    int last10checks[10] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
    //-1 used as validation num, here representing an empty index
    //program can use this to find empty spaces
    

public:
    void WriteCheck(int checknum, double amount);
    //constructors
    Checking();
    Checking(string name, long taxID, double balance);
    void Display() ;
    //display check num and deposit record
    //must use cout

};
