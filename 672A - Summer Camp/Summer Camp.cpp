#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{	int n;
	cin>>n;
	string s = "";
	int i = 1;
	while(s.size()<1000)
	{
		string s1 = "";
		int temp = i;
        while(temp)
		{
            s1+=(temp%10+'0');
			temp/=10;
		}
		reverse(s1.begin(),s1.end());
		s+=s1;
		i++;
	}
	cout<<s[n-1]<<endl;
	return 0;
}
