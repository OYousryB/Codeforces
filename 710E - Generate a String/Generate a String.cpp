#include<iostream>
#include<algorithm>
using namespace std;
typedef long long l;
int main()
{
	long long sum,x,y;
	cin >> sum >> x >> y;
	long long mark[sum];
	mark[1] = x;
	
	for(int i = 2;i <= sum;i++){
		if(i%2 == 0)
			mark[i] = min(mark[i-1]+x,mark[i/2]+y);
		else
			mark[i] = min(min(mark[i-1]+x,mark[i/2]+y+x),mark[i/2+1]+y+x);
	}

	cout<<mark[sum];
	return 0;
}
