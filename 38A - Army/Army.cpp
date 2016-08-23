#include <iostream>
#include<algorithm>
using namespace std;
int d[1000];
int main(){
	int n, a, b,sum=0;
	cin >> n;
	for (int i = 1; i < n;i++){
		cin >> d[i];
	}
	cin >> a >> b;
	for (int i = a; i < b; i++){
		sum += d[i];
	}
	cout << sum << endl;
	return 0;
}
