#include<iostream>
using namespace std;
int main(){
	int n,m,a[100];
	int sum=0,ans=1;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	int i=0;
	while(i<n){
		if(sum+a[i]<=m)
			sum+=a[i];
		else{
			ans++;
			sum=a[i];
		}
	i++;
	}
	cout<<ans<<endl;
}
