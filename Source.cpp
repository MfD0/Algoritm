#include <iostream>
#include <string>
using namespace std;


int main()
{
	string str;
	
	int k;
	getline(cin, str);
	cin >> k;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] >= 'A' + k)
		{
			str[i] -= k;
		}
		else
		{
			str[i] = 'Z' - (k - (str[i] - 64));
		}
	}

	cout << str << endl;
	

	return 0;
}