#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {

	int ar[100];
	int n, c = 0, p = -1;
	string s;
	cin >> n >> s;

	for (int i = 0; i < 100; i++) {
		ar[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		if (s[i] == 'B') {
			if (i == 0 || s[i - 1] == 'W') {
				c++;
				p++;
			}
			ar[p]++;
		}
	}

	cout << c << endl;

	for (int i = 0; i < c; i++) {
		cout << ar[i] << " ";
	}
}
