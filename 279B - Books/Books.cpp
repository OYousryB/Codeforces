#include <iostream>
#include <algorithm>
using namespace std;
int a[100000];
int main(){
	int n,t,j=0,k=0,ans=0,count=0;
	cin>>n>>t;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		count+=a[i];
		k++;
		while(count>t){
			count-=a[j];
			j++;
			k--;
		}
		ans=max(ans,k);
	}
	cout<<ans<<endl;
	return 0;
}
	
