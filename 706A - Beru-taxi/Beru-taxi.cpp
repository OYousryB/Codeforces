#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
const int INF=0x3f3f3f;
int mx,my,n,x[1005],y[1005],v[1005];
double ans=double(INF);
int main()
{
	cin >> mx >> my;
	cin >>n;
	for(int i=1;i<=n;i++)
	{
		cin >> x[i] >> y[i] >> v[i];
		ans=min(ans,sqrt((x[i]-mx)*(x[i]-mx)+(y[i]-my)*(y[i]-my))/v[i]);
	}
	cout.precision(20);
	cout << ans << endl;
	return 0;
}

/*
int main()
{
	scanf("%d%d",&sx,&sy);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d%d",&x[i],&y[i],&v[i]);
		ans=min(ans,sqrt((x[i]-sx)*(x[i]-sx)+(y[i]-sy)*(y[i]-sy))/v[i]);
	}
	printf("%.20lf\n",ans);
	return 0;
}
*/
