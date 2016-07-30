#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int tcases, I, J, K, N, n, m, cnt = 0, len;
	cin >> n >> m;

	while(1)
	{
		if(n >= m)
		{
			if(n >= 2 && m >= 1)
			{
				n -= 2;
				m -= 1;
				cnt++;
			}
			else
				break;
		}
		else
		{
			if(n >= 1 && m >= 2)
			{
				n -= 1;
				m -= 2;
				cnt++;
			}
			else
				break;
		}
	}
	cout << cnt << endl;

	return 0;
}
