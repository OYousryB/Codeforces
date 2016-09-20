#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
long long i,d,n,m=0,e,l=0,r=0;
pair<long long,long long> a[100001];
int main(){
	cin >> n >> d;
	for(l=0;l<n;l++) 
		cin >> a[l].first >> a[l].second;
		
	sort(a,a+n);
	
	for(l=0;r<n;) {
		if(a[r].first-a[l].first>=d)
		{
			e-=a[l++].second;
		}
		else{
			e+=a[r++].second;
		} 
		m=max(e,m);
	}
	cout << m;
	return 0;
}
