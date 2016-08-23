#include <iostream>
#include <string>
using namespace std;


int main() {

	int i, j, k;
	int count, sum;
	int n, m, p, t;
	string s;
	
	cin >> n;
	
	string cake[n];
	
	for (i = 0; i < n; i++) {
		cin >> cake[i];
	}
	
	count = 0;
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			if (cake[i][j] == 'C'){
				for (k = j + 1; k < n; k++){
					if (cake[i][k] == 'C'){
						count++;
					}
				}
				for (k = i + 1; k < n; k++){	
					if (cake[k][j] == 'C'){
						count++;
					}
				}
			}
		}
	}
	
	cout << count << endl;

	return 0;
}

