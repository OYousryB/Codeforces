#include<iostream>

using namespace std;
int main()
{
	long long t,n,sum;
	cin >> t;
	for(int i = 0; i<t;i++)
	{
		sum=0;
		cin>>n;
		sum=n*(n+1)/2;
		for(long long i=1;i<=n;i=i*2)
		{
			sum=sum-2*i;
		}
		cout <<sum<<endl;
	}
	return 0;
}
