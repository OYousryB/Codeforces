#include <iostream>
#include <cstdio>
using namespace std;

const int maxn = 1e5 + 5;

int a[10000005], b[10000005];
int main()
{
    int na, nb, k, m;
    while(cin>>na>>nb)
    {
        cin>>k>>m;
        for(int i=0; i<na; i++)
            cin>>a[i];
        for(int i=0; i<nb; i++)
            cin>>b[i];
        if(a[k-1] < b[nb-m])
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
