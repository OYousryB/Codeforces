#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int x1,x2,y1,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	long long x = abs(x1-x2);
	long long y = abs(y1-y2);
	long long z = max(x,y);
	cout << z << endl;
	
	return 0;
}
