#include <iostream>
using namespace std;

int main ()
{
    int n, m;
	cin >> n >> m;
	int i = 1;
	while (m >= 0)
	{
		if (m == 0){
			 cout << 0 <<endl;
			 return 0;
		}
		m -= i++;
		if (i == n + 1)
			i = 0;
		if (m < i){
			cout << m <<endl;
			return 0;
		}
	} 
	return 0;
}
