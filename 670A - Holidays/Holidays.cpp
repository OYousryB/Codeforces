#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int maxx = 0, minn = 0;
	for(int i=0;i<n;i++){
		if(i%7==0 || i%7==1) 
			maxx++;
		else if(i%7==5 || i%7==6) 
			minn++;
	}
	cout<<minn<<' '<<maxx<<endl;
	return 0;
}
