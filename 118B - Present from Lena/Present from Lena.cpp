#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int n,r,t;
    cin >> n;

    for (r = -n; r <= n; r++)
    {
			t = n - abs(r);
        for (int i = 0; i < abs(r); i++)
            cout << "  ";
        for (int i = 0; i < t; i++)
            cout << i << " ";
        for (int i = t; i > 0; i--)
            cout << i << " ";
        cout << 0 << endl;
    }
    return 0;
}
