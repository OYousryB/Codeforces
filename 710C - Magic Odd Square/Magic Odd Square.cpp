#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	for (int i = 1 ; i <= n ; i++){
		for ( int j = 1 ; j <= n ; j++){
			
			int x = n *( ( i + j -1 + n / 2) % n ) +( ( i + 2 * j - 2) % n) +1;
			cout << x <<" ";
		}
		cout << endl;
	}
	return 0;
}
