#include <iostream>
#include <string>
using namespace std;
string a[1000];
int main(){
	int n,k;
	int less=0,lessEq=0;
	int time1=0,time2=0;
	string s;
	cin >> n >> k;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	cin >> s;
	for(int i=0; i<n; i++){
		if(a[i].length() < s.length())
			less++;
		if(a[i].length() <= s.length())
			lessEq++;
	}
	less++;
	while(less > k){
			less -=k;
			time1 += k+5;
	}
	time1 += less;
	while(lessEq > k){
			lessEq -=k;
			time2 += k+5;
	}
	time2 += lessEq;
	
	cout << time1 <<" "<< time2 <<endl;
	return 0;
}
