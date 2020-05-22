#include <iostream>
#include <stdio.h>
using namespace std;

const int ROW = 30;
const int COL = 100;

int main()
{
	char roster[ROW][COL];
	bool print = false;
	
	

	
	while (print == false)
	{
		//for loop for inputing names
		for (int i = 0; i < ROW; i++)
		{
			
			cout << "enter name" << endl;
			cin.getline(roster[i], COL);
			//if statement to detect empty string
			if (roster[i] == "\0")
			{
				print = true;
				cout << "check";
				break;
			}
		}
	} 

	
	//prints names after program registers empty string
	if (print == true)
	{
		for (int i = 0; i < ROW; i++)
		{
			cout << roster[i] << endl;
		}
	}



	
	return 0;
}
