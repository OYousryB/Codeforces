#include <iostream>
using namespace std;

int main() {

	int n, x, y;
	cin >> n;
	if (n == 1) {
		cin >> x;
		if (x == 15) 
			cout << "DOWN"<< endl;
		else if (x == 0) 
			cout << "UP"<< endl;
		else 
			cout << -1 << endl;
		return 0;
	}
	for(int i = 0; i < n - 2; i++) {
		cin >>x;
	}
	cin >> x >> y;
	if (x < y && y != 15 || y == 0) {
		cout << "UP"<< endl;
		return 0;
	} 
	else {
		cout << "DOWN"<< endl; 
		return 0;
	}
}
