#include<iostream>
#include<map>

using namespace std;

int main()
{
	int n,x,y,d=0,x1,y1,i;
	map<double,int> m;
	
	cin>>n>>x>>y;
	
	for(i=0;i<n;i++)
	{
		cin>>x1>>y1;
		if(x==x1)
			d=1;
		else
		{
			double slope=(double)(y-y1)/(double)(x-x1);
			m[slope]+=1;
		}
	}
	
	cout<<m.size()+d;
	return 0;
}
