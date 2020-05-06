#pragma once
#include <iostream>
#include "Account.h"
using namespace std;

//const int LENGTH = 10;

class CreditCard : public Account
{
private:
    long cardnumber;
    string last10charges[10] = { "-1","-1","-1","-1","-1","-1","-1","-1","-1","-1" };

public:
    void DoCharge(string name, double amount);;
    //adjust bal, list as withdraw
    void MakePayment(double amount);
    //adjust bal, list as deposit

//constructors
    CreditCard();
    CreditCard(string name, long taxID, double balance);
    void Display();

    //display charges(names of charges) and deposit record
    //must use cout
         
};
