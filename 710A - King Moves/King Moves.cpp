#include <algorithm>  
#include <iostream>  
#include <string>
#define INF 0x3f3f3f3f
using namespace std;
int main() {
	char a[99];
	cin >> a;
	if (a[0] >= 'b'&&a[0] <= 'g'&&a[1] >= '2'&&a[1] <= '7') {
	cout<<"8"<<endl;
	}
	else if ((a[0] >= 'b'&&a[0] <= 'g' && (a[1] == '1' || a[1] <= '8')) ||
		(a[1] >= '2'&&a[1] <= '7' && (a[0] == 'a' || a[0] <= 'h'))) {
		cout<<"5"<<endl;
	}
	else
		cout<<"3"<<endl;
	return 0;
}
