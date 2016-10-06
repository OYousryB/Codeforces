#include<iostream>
using namespace std;
int a[110];
int main()
{
	long long n,sum=1,flag=0,first=0,end=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]==1&&flag==0)
		{
			flag=1;
			first=i;
		}
		if(a[i]==1)
			end=i;
	}
	int num=1;
	for(int i=first;i<=end;i++)
	{
		if(a[i]!=1)
			num++;
		else
		{
			sum*=num;
			num=1;
		}
	}
	if(flag==0)
		cout<<0<<endl;
	else
		cout<<sum<<endl;
	return 0;
}

