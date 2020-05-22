#include <iostream>
#include <string>
#include <cstring>

using namespace std;
string reverse(string *s1);

int main()
{
	string s1, output;
	int stop = 0;
	do
	{
	cout << "enter string to reverse." << endl;
	getline(cin, s1);
	if(s1=="")
	{
	    stop = 1;
	    break;
	}
	output = reverse(&s1);
	cout << output << endl;
	}while(stop = 0);
	

	system("pause");
	return 0;
}

string reverse(string *s1)
{
	
	char temp1[1024];
	char temp2[1024];
	strncpy(temp1, s1->c_str(), s1->length());
	int x = 0;
	for (int i = (strlen(temp1)-1); i>-1; i-- )
	{
	

		temp2[x] = temp1[i];
		
		x++;
		//cout << "i:" << i << " x:" << x << endl;
		//error checking
		
	}
	
	temp2[strlen(temp2)] = '\0';
	
	string s2(temp2);
	

	

	return s2;
}
