#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	string s;
	cin >> s;
	char initial = 'a';
	int length = 0;
	for(int i =0; i<s.length(); i++)
	{
		int diff = abs(s[i]-initial);
		length += min(diff, abs(26-diff));
		
		initial = s[i];
	}
	cout<<length << endl;
	return 0;
}
