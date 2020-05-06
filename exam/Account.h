#pragma once
 #include <iostream>
using namespace std;

class Account
{
private:
    string name1 = "";
    long taxID = 0;
    double balance;

protected:
    int numDeposits = 0;
    int numWithdraws = 0;
    

public:
    string name ;
    void    SetName(string n) ;
    void    SetTaxID(long id);
    void    SetBalance(double bal) ;
    void    MakeDeposit(double amount);
    string  GetName ();
    long GetTaxID() ;
    double GetBalance() ;
     

    double bal = balance;

    //Constructors
    Account() ;

    Account(string name, long TaxID, double Balance);

    virtual void Display();
    //must display name, taxID, and balance
    //must use cout

};
 