#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
	long long n;
	cin >> n;

	for(int i=1;i<=16;i++){
		long long temp=abs(n+i);
		while(temp){
			if(temp%10==8){
				cout << i <<endl;
				return 0;
			}
			temp=temp/10;
		}
	}
	return 0;
}
