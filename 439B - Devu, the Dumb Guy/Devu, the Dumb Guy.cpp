#include <iostream>
#include <algorithm>
using namespace std;
int subjects[100001];
int main(){
	long long n,x,total=0;
	cin >> n >> x;
	for(int i=0;i<n;i++){
		cin >> subjects[i];
	}
	sort(subjects,subjects+n);
	for(int i=0;i<n;i++){
		total+=subjects[i]*x;
		x--;
		if(x==0)
			x++;
	}
	cout << total << endl;
	return 0;		
}
