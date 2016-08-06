#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a,b,c,d;
	int Vpoints=0,Mpoints=0;
	cin>>a>>b>>c>>d;
	Mpoints = max(3*a/10 , a -(a/250 *c));
	Vpoints = max(3*b/10 , b -(b/250 *d));
	if(Vpoints > Mpoints)
		cout<<"Vasya"<<endl;
	else if(Mpoints > Vpoints)
		cout <<"Misha"<<endl;
	else
		cout<<"Tie"<<endl;
	return 0;
}
