#include <iostream>
using namespace std;


int main()
{

	double input, output;

	cout << "enter positive value. enter 0 to exit. " << endl;
	cin >> input;

	
	while (input != 0)
	{
		if (input < 0)
		{
			cout << "invalid value, try again." << endl;
		
			cout << "enter positive value, enter 0 to exit." << endl;
			cin >> input;
		}
		else
		{
			output = input * input;
			cout << "square of " << input << " is: " << output << endl;
			cout << "enter positive value, enter 0 to exit." << endl;
			cin >> input;

		}
	} 
	


	system("pause");
	return 0;
}
