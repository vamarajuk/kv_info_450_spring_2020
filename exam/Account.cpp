#include "Account.h"
#include <iostream>
#include <string>
using namespace std;

void Account::SetName(string n)
{
    string xx;
    if (n == "")
    {
        cout << "Enter name." << endl;
        getline(cin, xx);
        Account::name = xx;
    }
    else
    {
        Account::name = n;
    }

};

void Account::SetTaxID(long id)
{
    if (id < 0)
    {
        cout << "Cannot enter negative balance." << endl;

    }
    
    else
    {
        Account::taxID = id;
    }

}

 void Account::SetBalance(double bal1)
{
    
    Account::balance = bal1;
    
}

void Account::MakeDeposit(double amount)
{
    double temp = Account::GetBalance();
    temp = temp + amount;
    Account::SetBalance(temp);

    Account::numDeposits = Account::numDeposits +1;

}


string Account::GetName()
{
    return Account::name;
}

long Account::GetTaxID()
{
    return Account::taxID;
}

double Account::GetBalance()
{
    return Account::balance;
}

Account::Account()
{
    Account::name = "";
    Account::taxID = 000000000;
    Account::balance = 0.00;
}

Account::Account(string name, long TaxID, double Balance)
{
    Account::name = name;
    Account::taxID = TaxID;
    Account::balance = Balance;

}

void Account::Display()
{
    //cout << "Name: " << Account::name << endl;
    //cout << "TaxID: " << Account::taxID << endl;
    //cout << "Account Balance: $" << Account::balance << endl;

}