#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n,m,flag=0;
	cin>>n>>m;
	char ch;
	for(int i=0;i<n*m;i++)
	{
		cin>>ch;
		if(ch=='C'||ch=='M'||ch=='Y'){
		    cout<<"#Color"; 
		    flag=1; break; 
		    
		}
	}
	
	if(flag==0)
	cout<<"#Black&White";
}
