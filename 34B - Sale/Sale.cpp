#include <iostream>
#include <algorithm>
using namespace std;
int tv[1000];
int main(){
	int n,m,total=0;
	cin >> n >> m;
	for(int i=0;i<n;i++){
		cin >> tv[i];
	}
	sort(tv,tv+n);
	for(int i=0;i<m;i++){
		if(tv[i]<0)
			total+=tv[i]*-1;
	}
	cout << total <<endl;
	return 0;
}