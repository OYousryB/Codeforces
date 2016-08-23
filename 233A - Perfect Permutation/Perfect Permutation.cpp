#include <iostream>
using namespace std;
int main() {
	int i, n;

	cin >>n;
	if (n % 2 == 1)
		cout << -1;
	else {
		for (i = 2; i <= n; i += 2)
		cout<< i <<" " <<i-1<<" ";
	}
	cout<<endl;
	return 0;
}
