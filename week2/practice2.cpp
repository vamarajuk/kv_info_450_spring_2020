#include <iostream>
using namespace std;


int main()
{

	int input, output;

	cout << "enter value. enter 0 to exit. " << endl;
	cin >> input;

	output = 0;
	while (input != 0)
	{
		for (int i = 2; i < (input/2); i++)
		{
			if (input % i == 0)
			{
				cout << input << " is not prime." << endl;
				output = 0;
				break;
			}
			else
			{
				output = 1;	
			}
		}
		if (output == 1)
		{
			cout << input << " is prime." << endl;
		}
		cout << "enter value. enter 0 to exit. " << endl;
		cin >> input;
	}



	system("pause");
	return 0;
}
