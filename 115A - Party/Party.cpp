#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	int emp[a];
	for(int i=0;i<a;i++){
		cin >> emp[i];
	}
	int grp=0;
	for(int i=0;i<a;i++){
		int t=0;
		int w=i;
		while(emp[w]!=-1)
		{
			t++;
			w=emp[w]-1;
		}
		if(grp<t+1) 
			grp=t+1;
	}
	cout << grp;
}
