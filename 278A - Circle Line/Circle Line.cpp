#include <iostream>
#include <algorithm>
using namespace std;
long arr[100000];
int main()
{
	int n,t,s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>s>>t;     
	long ans=0,ans1=0;
	
	for(int i=min(s,t)-1;i<max(s,t)-1;i++){
	   ans+=arr[i];
	}
	for(int i=0;i<min(s,t)-1;i++){
	   ans1+=arr[i];
	}
	for(int i=max(s,t)-1;i<n;i++){
	   ans1+=arr[i];
	}
	
	cout<<min(ans,ans1)<<endl;
		return 0;
}
