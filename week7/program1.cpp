#include <iostream>
#include <string>
#include <vector>

using namespace std;
string reverse(string *s1);

int main()
{
	string s1, output;
	cout << "enter string to reverse." << endl;
	getline(cin, s1);
	output = reverse(&s1);
	cout << output << endl;


	system("pause");
	return 0;
}

string reverse(string *s1)
{
	//string s2;
	char temp1[1024];
	char temp2[1024];
	strncpy_s(temp1, s1->c_str(), s1->length());
	int x = 0;
	for (int i = strlen(temp1); i>-1; i-- )
	{
		//strcat(temp2, temp1[i]);

		temp2[x] = temp1[i];
		cout << temp2[x] << endl;
		x++;
		cout << "i:" << i << " x:" << x << endl;
		
		cout << temp2 << endl;
	}
	
	cout << temp2 << endl;
	string s2(temp2);
	cout << s2 << endl;

	/*for (unsigned i = 0; i < s1->length(); ++i)
	{
		s2.insert(0, s1[i]);
		cout << i << endl;
	}*/

	return s2;
}
