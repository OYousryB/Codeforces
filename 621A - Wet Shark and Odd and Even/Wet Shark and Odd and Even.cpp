#include <iostream>
#include <string>
#include <map>
typedef long long int 	LL;

using namespace std;
	int main(){
	int n;
	cin>>n;
	LL sum = 0;
	LL cnt=0,mn = 1e9 + 7;
	for(int i=0;i<n;i++){
		LL a;
		cin>>a;
		if(a&1){
		 	sum+=a;
			cnt++;
			mn = min(a,mn);
		}
		else sum+=a;
	}
	if(cnt&1) sum-=mn;
	cout<<sum<<endl;
	return 0;
}
