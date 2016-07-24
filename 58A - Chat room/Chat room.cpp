#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    int i=0, cnt=0;
    char s[105];
   cin>>s;
    for(i; i<strlen(s); ++i) 
		if(s[i]=='h') 
		{
		cnt++, i++;
		break;
		}
    for(i; i<strlen(s); ++i) 
		if(s[i]=='e') 
    	{
		cnt++, i++;
		break;
		}
    for(i; i<strlen(s); ++i) 
		if(s[i]=='l')
		{
		cnt++, i++;
		break;
		}
		
    for(i; i<strlen(s); ++i)
		if(s[i]=='l')
	 	{
		cnt++, i++;
		break;
		}
    for(i; i<strlen(s); ++i) 
		if(s[i]=='o')
		{
		cnt++, i++;
		break;
		}
    if(cnt>=5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
