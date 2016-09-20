#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int k,a[26],i,maxm=0,ans=0;
	cin>>k;
	for(i=0;i<26;i++){
		cin>>a[i];
		maxm=max(maxm,a[i]);
	}
	for(i=0;i<s.length();i++){
		ans=ans+(i+1)*a[s[i]-'a'];
	}
	for(i=s.length()+1;i<=s.length()+k;i++){
		ans=ans+(i*maxm);
	}
	cout<<ans<<endl;
}
