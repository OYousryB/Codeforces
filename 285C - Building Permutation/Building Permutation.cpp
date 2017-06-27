#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
long long ans;
int main()
{
	long long ans=0,n;
	cin >> n;
	for(int i=0;i<n;i++) 
		cin >> arr[i];
	sort(arr,arr+n);
	int y=1;
	for(int i=0;i<n;i++,y++){
		ans+=abs(y-arr[i]);
	}
		
	cout <<ans;
	return 0;
}
