#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long long  n,a,b,c;
    cin >> n >> a >> b >> c;
    if(n%4==0)
		cout<<"0"<<endl;
    else if(n%4==1)
		cout<<min(c,min(3*a,a+b))<<endl;
    else if(n%4==2)
		cout<<min(2*c,min(a*2,b))<<endl;
    else 
		cout<<min(3*c,min(a,b+c))<<endl;
	return 0;
}
