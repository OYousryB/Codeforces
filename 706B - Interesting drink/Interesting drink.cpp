#include<stdio.h>
#include<cstring>
#include<algorithm>
using namespace std;
const int bigConst=1103+1e5;

int x[bigConst];

int main() {
	int n;
	scanf("%d",&n);
	for(int j=0; j<n; j++)
		scanf("%d",&x[j]);
	sort(x,x+n);
	int q;
	scanf("%d",&q);
	for(int j=0; j<q; j++) {
		int m;
		scanf("%d",&m);
		int ans=upper_bound(x,x+n,m)-x;
		printf("%d\n",ans);
	}
	return 0;
}
