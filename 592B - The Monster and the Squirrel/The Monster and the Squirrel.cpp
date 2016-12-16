#include <iostream>
using namespace std;
int main(){
	long long  n,jumps=0;
	cin >> n;
	if(n==1 || n==2 || n==3){
		cout << "1" <<endl;
		return 0;
	}
	jumps = (n * (n-3)) - (n-4);
	cout << jumps <<endl;
	return 0;
}
	
	
