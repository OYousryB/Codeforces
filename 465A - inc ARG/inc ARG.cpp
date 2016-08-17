#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;
	cin >> s;
	int ans = 0;
	bool flag = true;
	for(int i = 0; i < n ; i++)
		if(flag)
		{
			if(s[i] == '0')
				flag = false;
			ans ++;
		}
	cout << ans << endl;
	return 0;
}
