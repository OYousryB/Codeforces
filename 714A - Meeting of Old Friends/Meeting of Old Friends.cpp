#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	long long  l1, r1, l2, r2, k;
	long long x,y,ans=0,zero=0;
	cin >> l1 >> r1 >> l2 >> r2 >> k;
	x=max(l1,l2);
	y=min(r1,r2);
	ans=y-x+1;
	if(k>=x && k<=y){
		ans--;
	}
	ans=max(ans,zero);
	cout<<ans<<endl;
	return 0;
}
