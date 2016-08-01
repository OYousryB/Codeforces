#include <iostream>  
#include <algorithm>  
using namespace std;  

int main(){
	
	long long m, n;
	cin >> n >> m;
	if (n == 1) 
		cout << 1 << endl;
	//else cout << (m - 1 > n - m - 1 ? m - 1 : m + 1) << endl;
	else if(m - 1 > n - m - 1 )
		cout<<m - 1 << endl;
	else
		cout<<m +1 << endl;
	
	return 0;
}
