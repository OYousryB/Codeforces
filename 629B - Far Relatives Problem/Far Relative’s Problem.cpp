#include<stdio.h>
#include<iostream>
#include <algorithm>
using namespace std;
typedef long long LL;
#define INF 0x3f3f3f3f
#define eps 1e-8

int n, f[400], m[400], l, r, ans;
char c;

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf(" %c%d%d", &c, &l, &r);
		if (c == 'F') f[l]++, f[r+1]--;
		else m[l]++, m[r+1]--;
	}
	ans = 0;
	for (int i = 1; i < 370; i++)
	{
		f[i] += f[i-1];
		m[i] += m[i-1];
		ans = max(ans, 2*min(f[i], m[i]));
	}
	printf("%d\n", ans);
	return 0;
}
