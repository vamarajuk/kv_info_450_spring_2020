#include <iostream>
using namespace std;

int main()
{
	int input;

	cout << "Enter year to check. enter 0 to exit. " << endl;
	cin >> input;

	
	while (input != 0)
	{
		

		if (input % 100 == 0)
		{
			//cout << "a" << endl;
			//the a,b,c cout statements are to error check the flow
			if (input % 400 == 0)
			{
				//cout << "b" << endl;
				if (input % 4 == 0)
				{
					//cout << "c" << endl;
					cout << input << " is a leap year." << endl;
					cout << "Enter year to check. enter 0 to exit. " << endl;
					cin >> input;
				}
				else
				{
					cout << input << " is not a leap year." << endl;
					cout << "Enter year to check. enter 0 to exit. " << endl;
					cin >> input;
				}
			}
			else
			{
				cout << input << " is not a leap year." << endl;
				cout << "Enter year to check. enter 0 to exit. " << endl;
				cin >> input;
			}
			
		}
		else
		{
			cout << input << " is not a leap year." << endl;
			cout << "Enter year to check. enter 0 to exit. " << endl;
			cin >> input;
		}
		
	}




	system("pause");
	return 0;
}
