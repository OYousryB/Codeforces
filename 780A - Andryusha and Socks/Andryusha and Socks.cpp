#include <iostream>
#include <algorithm>
using namespace std;
int arr[100000];
int main()
{
	int n,num,x=-1;
	cin>>n;
	int count=0;
	for(int i=0;i<2*n;i++)
	{
		cin>>num;
		if(arr[num]==1)count--;
		else{
			arr[num]=1;
			count++;
		}

		x=max(count,x);
	    
	}
	cout<<x<<endl;
	return 0;
}