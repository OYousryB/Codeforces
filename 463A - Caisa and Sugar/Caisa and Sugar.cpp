#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,s;
	int x,y;
	int ans=-1;
	cin >> n >> s;
	for(int i=0;i<n;i++){
		cin >> x >> y;
	 	if(s*100<x*100+y)
	 		continue;
        ans=max(((100*s)-(x*100+y))%100,ans);
    }
    cout<<ans<<endl;
    return 0;
}
		
	
