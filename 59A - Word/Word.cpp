#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int l = 0, u = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (islower(s[i])) l++;
		else u++;
	}
	if (l>=u)
	{
		for (int i = 0; i < s.size(); i++)
			s[i] = tolower(s[i]);
		cout << s << endl;
	}
	else
	{
		for (int i = 0; i < s.size(); i++)
			s[i] = toupper(s[i]);
		cout << s << endl;
	}
	return 0;
}
