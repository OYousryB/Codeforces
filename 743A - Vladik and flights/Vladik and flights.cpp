#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	char s[100000];
	cin >> a >> b >> c >> s;
	if(s[b-1] == s[c-1])
		cout << 0 << endl;
	else
		cout << 1 << endl; 
	return 0;
}