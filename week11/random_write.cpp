#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//ofstream randoms("c:/users/Kaushik/desktop/randoms.txt");
	//used for testing on my machine. 
	ofstream randoms("randoms.txt");
	if (!randoms)
	{
		cout << "file open error." << endl;
		return 1;
	}

	for (int i = 0; i < 1000; i++)
	{
		int num = rand() % 20000 - 10000;
    //should generate nums -10,000 < n < 10,000.
		randoms << num << endl;
		
	}

	return 0;
}
