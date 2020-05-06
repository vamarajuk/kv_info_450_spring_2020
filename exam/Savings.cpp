#include "Savings.h"
#include <iostream>
#include <string>
#include "Savings.h"
using namespace std;

void Savings::DoWithdraw(double amount)
{
    //adjust balance
    double temp = Savings::GetBalance();
    temp = temp - amount;
    Savings::SetBalance(temp);


    //list as withdraw
    Savings::numWithdraws = Savings::numWithdraws +1;
}

Savings::Savings()
{
    Savings::SetName("");
    Savings::SetTaxID(000000000);
    Savings::SetBalance(0.00);
}

Savings::Savings(string name, long TaxID, double balance)
{
    Savings::SetName(name);
    Savings::SetTaxID(TaxID);
    Savings::SetBalance(balance);
}

void Savings::Display() 
{ 
    //printing deposit and withdrawal records
    cout << "number of deposits: " << Savings::numDeposits << endl;
    cout << "number of withdrawals: " << Savings::numWithdraws << endl;
};