#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,c=0;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int min = a[0];
	int max = a[n-1];
	for(int i=0;i<n;i++){
		if(a[i]>min && a[i]<max)
			c++;
	}
	cout << c << endl;
	return 0;
}