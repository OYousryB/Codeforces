#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int count = 0;
	if(m < n)
	{
		cout << n - m << "\n";
		return 0;
	}
	while(n < m)
	{
		if(m % 2 == 0)
		{			
			m /=2;
		}
		else
		{
			m ++;
		}
		count++ ;
	}
	cout << abs(count + n - m) <<"\n";

	return 0;
}
