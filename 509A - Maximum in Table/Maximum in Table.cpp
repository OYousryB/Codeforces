#include<iostream>
using namespace std;

int f[11][11];

int main()
{
	for (int i = 1; i <= 10; i++)
		f[1][i] = f[i][1] = 1;
	for (int i = 2; i <= 10; i++)
		for (int j = 2; j <= 10; j++)
			f[i][j] = f[i - 1][j] + f[i][j - 1];

	int n;
	cin >> n;
	cout << f[n][n] << endl;
	return 0;
}
