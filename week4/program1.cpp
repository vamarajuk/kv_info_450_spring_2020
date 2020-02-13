#include <iostream>
using namespace std;

const int LENGTH = 10;

int main()
{
	double array[LENGTH]; 
	

	//number input
	for (int i = 0; i < LENGTH; i++)
	{
		
		cout << "enter integer." << endl;
		cin >> array[i];

	}

	//calculate mean
	double mean =0;
	for (int i = 0; i < LENGTH; i++)
	{
		mean += array[i];
	}
	mean = mean / LENGTH;
	cout << "mean: " << mean << endl;

	//for each num, subtract mean and square result
	for (int i = 0; i < LENGTH; i++)
	{
		array[i] = array[i] - mean;
		array[i] = array[i] * array[i];
	}

	//mean of squared differences
	for (int i = 0; i < LENGTH; i++)
	{
		mean += array[i];
	}
	mean = mean / LENGTH;
	

	//square root of mean of squared diff
	//sqrt(mean);
	cout << "standard deviation: " << sqrt(mean) << endl;




	
	return 0;
}
