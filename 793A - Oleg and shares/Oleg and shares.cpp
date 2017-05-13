#include<iostream>
#include<algorithm>
using namespace std;

int num[100000];
int main(){
	long long n, k,sum=0;
	cin >> n >> k;
	for (int i = 0; i < n; i++){
		cin >> num[i];
	}
	sort(num , num+n);
	for (int i = 1; i < n; i++){
		if ((num[i]-num[0])%k != 0){
			cout << -1 << endl;
			return 0;
		}
		else{
			sum += (num[i]-num[0])/k;
		}
	}
	cout << sum << endl;
	return 0;
}