#include<bits/stdc++.h>
using namespace std;
int main() {
	long long int x, y, n;
	long long mod =1000000007;
	cin>>x>>y>>n;
	long long int funct;
	if(n%6==1)
	    funct = x;
	else if(n%6==2)
	    funct = y;
	else if(n%6==3)
	    funct = y-x;
	else if(n%6==4)
	    funct = -x;
	else if(n%6==5)
	    funct = -y;
	else if(n%6==0)
	    funct = x-y;
	if(funct>=0)
	    cout<<funct%mod;
	else if(funct>=mod)
	    cout<<(mod+funct)%mod;
	else
	    cout<<((mod*2)+funct)%mod;
	return 0;
}
