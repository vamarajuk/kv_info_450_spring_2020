#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    
    cout << "quadratic equation solver. this program finds real solutions to quadratics" << endl;
    cout << "if the solution is a complex number, the program will just say 'it's a complex number'" << endl;
  cout << "enter variable for a, b, and c." << endl;
  cin >>  a;
  cin >>  b;
  cin >>  c;
  
  double x = (b*-1) + sqrt((b*b)-(4*a*c));
  //cout << x << endl;
  x = x/(2*a);
  isnan(x)?
  cout << "Solution 1 is a complex number" << endl:
  cout << "Solution 1 is: " << x << endl;
  

  x = (b*-1) - sqrt(pow(b,2)-(4*a*c));
  x = x/(2*a);
  isnan(x)?
  cout << "Solution 2 is a complex number" << endl:
  cout << "Solution 2 is: " << x << endl;
  
    
  
}
