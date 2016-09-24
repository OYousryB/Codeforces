#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	int n,sum1=0,sum2=0,flag=1;
	string s;
	cin>>n>>s;
	for(int i=0;i<n/2;i++){
	    if(s[i]!='4'&&s[i]!='7')
	        flag=0;
	    else sum1+=s[i]-'0';
	}
	for(int i=n/2;i<n;i++){
	    if(s[i]!='4'&&s[i]!='7')
	        flag=0;
	    else sum2+=s[i]-'0';
	}
	if(sum1!=sum2)
	    flag=0;
	if(flag)
		cout<<"YES"<<endl;
	else 
		cout<<"NO"<<endl;

return 0;
}
