#include <bits/stdc++.h>
using namespace std;
long long arr[100];
int main() {
	int n,sum=0,k,c=0;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
		if(k <= 0)
			break;
		if(sum > 8){
			sum-=8;
			k-=8;
			c++;
		}else{
			k-=sum;
			sum=0;
			c++;
		}
	}
	if(k > 0)
		cout<<-1<<endl;
	else
		cout<<c<<endl;
	return 0;
}
