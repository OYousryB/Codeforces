#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int ans = 1,n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(x==1){ans = -1;break;}
	}
	cout<<ans<<endl;
	return 0;
}
