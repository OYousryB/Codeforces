#include <iostream>
using namespace std;
const int MaxN = 3e5 + 17;
int a[MaxN], b[MaxN];

int main ()
{
	int Sum, n, m;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
        
    for (int i = n; i >= 1; i--)
        b[i] = a[i + 1] + a[i];
        
    for (int i = 1; i <= n; i++)
        cout << b[i] << ' ';
        
    return 0;
}
