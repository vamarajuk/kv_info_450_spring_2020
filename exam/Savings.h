#pragma once
#include <iostream>
#include "Account.h"
using namespace std;



class Savings : public Account
{
public:
    void DoWithdraw(double amount);
    //adj bal, list as withdraw

    Savings();
    Savings(string name, long taxID, double balance);

    void Display();
    //display accounts withdrawal and deposit record
    //must use cout

};
