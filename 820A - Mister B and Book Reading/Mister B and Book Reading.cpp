#include <bits/stdc++.h>
using namespace std; 
int main(){
	int c,v,v1,a,l; 
	cin >> c >> v>> v1>>a>>l;
	int count = 0;
	while (1){
		c -= v;
		count++;
		if (c <= 0) 
			break;
		c += l;
		v = min(v1, v + a);
	}
	cout << count;
	return 0;
}
