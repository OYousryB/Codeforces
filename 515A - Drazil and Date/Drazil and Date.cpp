#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long a, b, s, m;
	cin>> a >> b >> s;
	a = abs(a);
	b = abs(b);
	m = a + b;
	m = s - m;
	if(m == 0)
		cout << "Yes\n";
	else if(m < 0)
		cout << "No\n";
	else
	{
		if(m % 2)
			cout << "No\n";
		else
			cout << "Yes\n";
	}
	return 0;
}
/*

int main()
{
    int a, b, s;
 
    while(cin >> a >> b >> s)
    {
        int m = fabs(m) + fabs(n);
        if(s >= m && (m-s) % 2 == 0)

            cout << "Yes" << endl;
        else cout << "No" << endl;
    }
 
    return 0;
}
*/

