#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int h, m, ans=0;
	cin >> s;
	h = (s[0]- '0') * 10 + (s[1] - '0');
	m = (s[3] - '0') * 10 + (s[4] - '0');
	while(1){
		if(h/10 == m%10 && h%10 == m/10){
			cout << ans;
			return 0;	
		}
		ans++;
		m++;
		if(m == 60){
			m = 0;
			h = (h+1)%24;
		}
	}
	return 0;
}