#include <bits/stdc++.h>
using namespace std;

main(){
	int n,x[100000],h[100000],i,ans=2;
	cin>>n;
	if(n==1){
		cout<<1;
		return 0;
	}
	for(i=0;i<n;i++)
		cin>>x[i]>>h[i];
	for(i=1;i<n-1;i++){
		if(x[i]-x[i-1]>h[i]){
			ans++;
		}
		else if(x[i+1]-x[i]>h[i]){
			ans++;
			x[i]+=h[i];
		}
	} 
	cout<<ans;
	return 0;
}
