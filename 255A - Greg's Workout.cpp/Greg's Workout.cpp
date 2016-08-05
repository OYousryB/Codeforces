#include <iostream>
using namespace std;
int main()
{
	int n,arr[30];
	int chest=0,biceps=0,back=0;
	cin >>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(i % 3 == 0)
			chest+=arr[i];
		else if (i%3 == 1)
			biceps+=arr[i];
		else if (i%3 == 2)
			back+=arr[i];
	}
	if(chest>biceps && chest>back)
		cout<<"chest"<<endl;
		
	else if(biceps>chest && biceps>back)
		cout<<"biceps"<<endl;
	
	else
		cout<<"back"<<endl;	
	
	return 0;
}
