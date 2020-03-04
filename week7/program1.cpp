#include <iostream>
#include <string>
#include <vector>
using namespace std;
string reverse(string *s1);

int main()
{
	string s1;
	cout << "enter string to reverse." << endl;
	getline(cin, s1);
	reverse(&s1);
	cout << s1 << endl;


	system("pause");
	return 0;
}

string reverse(string *s1)
{
	string s2;
	//int L1 = s1->length;
	/*for (unsigned i = 0; i < s1->length(); i++)
	{
		s2 = s2 + s1->at(s1->length() - i);
		cout << i << endl;//error checking
	}*/

	for (int i = 0; i < s1->length(); ++i)
	{
		s2.insert(0, s1[i]);
		cout << i << endl;//error checking
	}

	return s2;
}
