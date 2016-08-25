#include <algorithm>
#include <iostream>
using namespace std;
long long a[100001];
int main() {

	int n,k;
	
	cin>>n>>k;
	
	for(int i=0 ;i<n ;i++){
		cin>>a[i];
	}
	int ans=0;
	sort(a,a+n);
	int at = n-1;
	while(true){
		if(at<0){
			break;
		}
		ans += 2*(a[at]-1);
		at -= k;
	}
	
	cout<<ans<<endl;
	return 0;
}
