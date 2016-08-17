#include<iostream>
using namespace std;
int sum[2],i,j,flag=1;
int main(){
	int n;
	cin>>n;
	int a[n];
	for( i=0;i<n;i++)
		cin>>a[i];
	j=n-1;
	for(i=0;i<=j;){
	//	cout<<i<<endl;
		flag=1-flag;
		if(a[i]<a[j])
		sum[flag]+=a[j],j--;
		else
		sum[flag]+=a[i],i++;
	}
	cout<<sum[0]<<" "<<sum[1];
	return 0;
}
