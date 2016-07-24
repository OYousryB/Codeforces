#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
#define sc(n) scanf("%d", &n)
#define sf scanf
#define pf printf
#define MX 10005
typedef long long ll;
double a[MX];

int main()
{
    //freopen("in.txt","r",stdin);
    int i, n, l;
    double ans1, ans2, d, mx;
    cin >> n >> l;
    for(i=0; i<n; i++)
        cin >> a[i];
    sort(a, a+n);
    ans1 = max(a[0]-0, l-a[n-1]);
    mx =0;
    for(i=1; i<n; i++)
    {
        d = (a[i]-a[i-1])/2;
        if(d>mx)
            mx = d;
    }
    ans2 = max(ans1, mx);
    pf("%.10f\n", ans2);
    return 0;
}

