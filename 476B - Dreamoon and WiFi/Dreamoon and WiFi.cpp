#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include <iomanip> 
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int firstS=0,secondS=0;
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]=='+')
			firstS++;
		if(s1[i]=='-')
			firstS--;
	}
	int Unknown=0;
	for(int i=0;i<s2.length();i++)
	{
		if(s2[i]=='?')
			Unknown++;
		else
		{
			if(s2[i]=='+')
				secondS++;
			if(s2[i]=='-')
				secondS--;
		}
	}
	if (Unknown==0) {
		if (firstS==secondS)
			cout << setprecision(9) << 1.0 << endl;
		else
			cout << setprecision(9) << 0.0 << endl;
	}
	else {
		int l=Unknown+secondS-firstS;
		if (l%2)
			cout << setprecision(9) << 0.0 << endl;
		else {
			int p=l>>1;
			if (p<0 || p>Unknown) {
				cout << setprecision(9) << 0.0 << endl;
				return 0;
			}
		else {
			double den=(1<<Unknown);
			int dist = firstS - secondS;
			int tp=abs(dist)+(Unknown-abs(dist))/2;
			int x=1;
			for(int i=0;i<tp;i++)
			{
				x*=Unknown-i;
			}
			for(int i=2;i<=tp;i++)
			{
				x/=i;
			}
			double ans=(double)(x)/(den)*1.0;
			cout << setprecision(14) << ans << endl;
			}
		}
	}
}
