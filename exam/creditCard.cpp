#include <iostream>
#include <string>
#include "creditCard.h"
using namespace std;

void CreditCard::DoCharge(string name, double amount)
{
    //adjust bal
    double temp = CreditCard::GetBalance();
    temp = temp + amount;
    CreditCard::SetBalance(temp);


    //list as a withdraw
    CreditCard::numWithdraws = +1;

    //update last10Charges
    if (CreditCard::numWithdraws <= 10)
    {
        //find next empty index in array
        for (int i = 0; i < 10; i++)
        {
            if (CreditCard::last10charges[i] == "-1")
            {
                CreditCard::last10charges[i] = name;
                break;
            }
        }
    }
    else if (CreditCard::numWithdraws > 10)
    {
        //shift all values to make room for new entry
        for (int i = 1; i < 10; i++)
        {

            CreditCard::last10charges[i - 1] = CreditCard::last10charges[i];
        }

        //place new entry at last index
        CreditCard::last10charges[9] = name;
    }
}

void CreditCard::MakePayment(double amount)
{
    //adjust balance
    CreditCard::MakeDeposit(amount * -1);

    //list as deposit
    CreditCard::numDeposits = +1;

}

CreditCard::CreditCard()
{
    CreditCard::SetName("");
    CreditCard::SetTaxID(000000000);
    CreditCard::SetBalance(0.00);

}

CreditCard::CreditCard(string Name, long taxID, double Balance)
{
    CreditCard::SetName(Name);
    CreditCard::SetTaxID(taxID);
    CreditCard::SetBalance(Balance);
}

void CreditCard::Display()
{
    //list charges
    cout << "List of last 10 charges for " << CreditCard::GetName() << endl;
    for (int i = 0; i < 10; i++)
    {
        if(CreditCard::last10charges[i] != "-1")
        {
        cout << "Charge " << i + 1 << ": " << CreditCard::last10charges[i] << endl;
        }
    }

    //list deposit record
    cout << "Number of Payments for Credit Card: " << CreditCard::numDeposits << endl;

}