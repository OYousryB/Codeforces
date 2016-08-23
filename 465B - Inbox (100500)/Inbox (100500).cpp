#include <iostream>
using namespace std;
int arr[1000];


int main()
{
	int ans = 0;
	int n;
	cin >> n;
	for(int i=0; i<n ; i++)
		cin >> arr[i];
	for(int i=0; i<n ; i++){
		if (arr[i] == 1)
			ans += 2;
	}
	if(ans != 0)
	ans--;
	for(int i=0; i<n-1 ; i++){
		if (arr[i] == 1 && arr[i+1] == 1)
			ans--;
	}
	cout << ans;
	return 0;
}
