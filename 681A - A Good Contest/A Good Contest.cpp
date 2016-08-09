#include <iostream>
#include <string>
using namespace std;

int main() 
{
	int n;
	string s;
	int x, y;
	cin>>n;
	int flag=0;
	for(int i=0;i<n;i++)
		{
			cin >> s >> x >> y;
			if(x>=2400 && y-x>0)
				{
					flag=1;
				}
		}
	
	if(flag=!0) 
		cout<<"YES"<<endl;
	else 
		cout<<"NO"<<endl;
  return 0;
}
