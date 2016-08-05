#include <iostream>
using namespace std;
int a[100010];
int main()
{

     int n;
     cin>>n;
     for(int i=0;i<n;i++)
	 	{
	         cin>>a[i];
	         while(a[i]%2==0)
			 	a[i]/=2;
	         while(a[i]%3==0)
			 	a[i]/=3;
     	}
     int bid = 0;
     for(int i=0;i<n-1;i++)
	 	{
			 if(a[i]!=a[i+1])
			 	bid = 1;
	 	}
		     if(bid)
			 	cout<<"No"<<endl;
		     else 
			 	cout<<"Yes"<<endl;
     return 0;
}
