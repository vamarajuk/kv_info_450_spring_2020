#include <iostream>
using namespace std;

const double pi = 3.1415926;

double calculateCircumference(double radius);

int main()
{
	double radius = 0;
	
	cout << "Input radius." << endl;
	cin >> radius;
	double cir = calculateCircumference(radius);

	cout << "The circumference of a circle with the radius " << radius << "is " << cir << endl;

	

	
	return 0;
}

double calculateCircumference(double radius)
{
	double Cir = 2 * pi * radius;
	
	return Cir;
}
