#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	int n, x;
	cin>> n >> x;
	ll ans = 0;
	for(int i = 1; i * i <= x, i <= n; i++) {
		if(x % i) continue;
		if(x / i > n) continue;
		ans++;
	}
	cout << ans << endl;
	return 0;
}
