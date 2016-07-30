#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int val;
		cin >> val;
		sum += val;
	}
	sum = abs(sum);
	cout << sum / x + (sum % x ? 1 : 0) << endl;
	return 0;
}
