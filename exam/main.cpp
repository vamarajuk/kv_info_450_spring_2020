#include <iostream>
#include <string>
#include "Account.h"
#include "checking.h"
#include "creditCard.h"
#include "Savings.h"

using namespace std;

int main()
{

    Checking ck("checking",0, 100 );
    CreditCard cc("credit card", 1337, 100);
    Savings ss("savings", 0, 100);

    int menu_sel = -1;
    int input_i = 0;
    string input_s = "";
    double input_d = 0;
    long input_L = 0;
    char input_c[100];

    
    
    while (menu_sel != 0)
    {
        
        //print menu
        
        cout << "Checking balance: $" << ck.GetBalance() << "\t";
        cout << "Savings balance: $" << ss.GetBalance() << "\t";
        cout << "Credit Card balance: $" << cc.GetBalance() << endl;

        cout << "1. Savings Deposit" << endl;
        cout << "2. Savings Withdrawal" << endl;
        cout << "3. Checking Deposit" << endl;
        cout << "4. Write a Check" << endl;
        cout << "5. Credit Card Payment" << endl;
        cout << "6. Make a Charge" << endl;
        cout << "7. Display Savings" << endl;
        cout << "8. Display Checking" << endl;
        cout << "9. Display Credit Card" << endl;
        cout << "0. Exit" << endl;

        cin >> menu_sel;

        //switch for each option

        switch (menu_sel)
        {

        case 1:
            cout << "Enter amount to deposit." << endl;
            cin >> input_d;
            ss.MakeDeposit(input_d);
            break;

        case 2:
            cout << "Enter amount to withdraw" << endl;
            cin >> input_d;
            ss.DoWithdraw(input_d);
            break;
        case 3:
            cout << "Enter amount to Deposit" << endl;
            cin >> input_d;
            ck.MakeDeposit(input_d);
            break;
        case 4:
            cout << "Enter Check number" << endl;
            cin >> input_i;
            cout << "Enter check amount" << endl;
            cin >> input_d;
            ck.WriteCheck(input_i, input_d);
            break;
        case 5:
            cout << "Enter Credit Card payment amount." << endl;
            cin >> input_d;
            cc.MakePayment(input_d);
            break;
        case 6:
            cout << "Enter Name of charge followed by a period. Example 'electric bill.' " << endl;
            std::getline(cin, input_s, '.');
            cout << "enter amount of charge" << endl;
            cin >> input_d;
            cc.DoCharge(input_s, input_d);
            break;
        case 7:
            ss.Display();
            break;
        case 8:
            ck.Display();
            break;
        case 9:
            cc.Display();
            break;
        case 0:

            menu_sel = 0;
            break;
        }


    }


    return 0;

}