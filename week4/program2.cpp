#include <iostream>
#include <stdio.h>
using namespace std;

const int ROW = 30;
const int COL = 100;

int main()
{
	char roster[ROW][COL];
	bool print = false;
	
	/*for (int i = 0; i < ROW; i++)
	{
		cout << "enter name" << endl;
		cin.getline(roster[i], COL);
		if (roster[i] == " ")
		{
			print = true;
			break;
		}
	}*/

	while (print == false)
	{
		
		for (int i = 0; i < ROW; i++)
		{
			
			cout << "enter name" << endl;
			cin.getline(roster[i], COL);
			if (roster[i] == " ")
			{
				print = true;
				cout << "check";
				break;
			}
		}
	} 

	if (print == true)
	{
		for (int i = 0; i < ROW; i++)
		{
			cout << roster[i] << endl;
		}
	}



	system("pause");
	return 0;
}
