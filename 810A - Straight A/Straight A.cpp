#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;
int main(){
	double n,k,a,avg=0,sum=0,count=0;
	cin >> n >> k;
	for(int i=1;i<=n;i++){
		cin >> a;
		sum+=a;
		avg= round(sum/i);
	}
	int z = n+1;
	while(avg<k){
		sum+=k;
		avg = round(sum/z);
		count ++;
		z++;
	}
	cout << count;
}