#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
const int INF = 0x3f3f3f3f;
#define LL long long
char s[1000000];
int main()
{
	int n;
	cin>> n;
		for(int i=0;i<n;i++)
		{

			if((i+1)%4!=0)
				s[i]='a'+(i+1)%4-1;
			else
				s[i]='d';
		}
		s[n]='\0';
		cout<<s;
	return 0;
}

