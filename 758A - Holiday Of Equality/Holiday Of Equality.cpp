#include <iostream>
#include <algorithm>
using namespace std;
int a[10000];
int main(){
	int n,t=0,s,total;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
		t+=a[i];
	}
	sort(a,a+n);
	//cout << a[n-1];
	total = n* a[n-1];
	s = total - t;
	cout << s << endl;
	return 0;
}
