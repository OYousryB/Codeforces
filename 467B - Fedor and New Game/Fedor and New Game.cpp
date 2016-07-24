#include<iostream>
using namespace std;

int a[1000];
bool f[20];

int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	for (int i = 0; i < m; i++)
		cin >> a[i];
	int num;
	cin >> num;
	for (int i = 0; i < n; i++)
	{
		if (num & 1 << i)
			f[i] = true;
		else
			f[i] = false;
	}

	int ans = 0;
	for (int i = 0; i < m;i++)
	{
		int cnt = 0;
		for (int j = 0; j < n;j++)
		{
			if (f[j] && (a[i] & 1 << j) == 0)
				cnt++;
			else if (!f[j] && (a[i] & 1 << j))
				cnt++;
		}
		if (cnt <= k)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
