#include <iostream>
#include <cmath>
#include <algorithm>
#include<iomanip> 
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
	cout.setf(ios::fixed);    // printf("%.20lf\n",ans);
	cout << setprecision(22)<<ans << endl;
	return 0;
}
