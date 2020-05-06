#include <iostream>
#include <string>
#include "checking.h"
//#include "Account.h"
using namespace std;




void Checking::WriteCheck(int checknum, double amount)
{
    //update balance
    double temp;
    temp = Checking::GetBalance();
    temp = temp - amount;
    Checking::SetBalance(temp);

    //update numWithdraws
    Checking::numWithdraws = +1;

    //update last10checks
    if (Checking::numWithdraws <= 10)
    {
        //find next empty index in array
        for (int i = 0; i < 10; i++)
        {
            if (Checking::last10checks[i] == -1)
            {
                Checking::last10checks[i] = checknum;
                break;
            }
        }
    }
    else if (Checking::numWithdraws > 10)
    {
        //delete oldest index
        //Checking::last10checks[0] = -1;

        //shift all values to make room for new entry
        for (int i = 1; i < 10; i++)
        {

            Checking::last10checks[i - 1] = Checking::last10checks[i];
        }

        //place new entry at last index

        Checking::last10checks[9] = checknum;


    }


}

Checking::Checking()
{
    
    Checking::SetName("");
    Checking::SetTaxID(000000000);
    Checking::SetBalance(0.00);
}

Checking::Checking(string name, long taxID, double balance)
{
    Checking::SetName(name);
    Checking::SetTaxID(taxID);
    Checking::SetBalance(balance);

}

void Checking::Display()
{
    //display last 10 checks, then num of deposits
    cout << "Last 10 Checks for : " << Checking::GetName() << endl;
    for (int i = 0; i < 10; i++)
    {
        if(Checking::last10checks[i] != -1)
        { 
        cout << "Charge " << i + 1 << ": " << Checking::last10checks[i] << endl;
        }
    }
    cout << "Number of Deposits for Checking: " << Checking::numDeposits << endl;
}
