#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	
	int R, C;
	string fdetect[100];
	int ans; 
    cin >> R >> C;
    for (int i = 0; i < R; ++i)
        cin >> fdetect[i];
        
    for (int i = 0; i + 1 < R; i++){
    	for (int j = 0; j + 1 < C; j++){
	        string s = "####";
	        s[0] = fdetect[i][j];
	        s[1] = fdetect[i + 1][j];
	        s[2] = fdetect[i][j + 1];
	        s[3] = fdetect[i + 1][j + 1];
	        sort(s.begin(), s.end());
	        if (s == "acef")
	            ans++; 
    	}
    }
    cout << ans << endl;
    return 0;
}
