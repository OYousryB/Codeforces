#include<bits/stdc++.h>
using namespace std;
int main(){
	string x,y;
	int a[26];
	char c;
	cin>>x>>y;
	for(int i=0;i<26;i++) 
		a[x[i]-'a']=y[i];
		
	while(cin>>c){
		if(isupper(c)) 
			cout<< (a[c-'A']-32);
		else if(islower(c)) 
			cout<< char((a[c-'a']));
		else 
			cout<<char(c);
	}
	
return 0;
}

