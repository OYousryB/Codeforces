
#include <iostream>
using namespace std;
int main()
{
	int n,m,count=0;
	cin>>n>>m;
	int arr[200][200];
	for(int i=1 ; i<=n;i++)
		for(int j=1; j<=2*m;j++)
		{
			cin>>arr[i][j];
		}
	for(int i=1 ; i<=n;i++)
		for(int j=1; j<=m;j++)
		{
			if(arr[i][2*j-1]+ arr[i][2*j]!=0)
			count++;
		}	
		cout<<count<<endl;
		
		return 0;
}


