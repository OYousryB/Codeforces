#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    string s;
    int r,b,y,g;
    int rd = 0, bd = 0, yd = 0, gd = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'R'){
            r = i % 4;
        }
        if (s[i] == 'B'){
            b = i % 4;
        }
        if (s[i] == 'Y'){
            y = i % 4;
        }
        if (s[i] == 'G'){
            g = i % 4;
        }
    }
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '!'){
            if (i % 4 == r){
                rd++;
            }
            if (i % 4 == b){
                bd++;
            }
            if (i % 4 == y){
                yd++;
            }
            if (i % 4 == g){
                gd++;
            }
        }
    }
    cout << rd << " " << bd << " " << yd << " " << gd << endl;
	return 0;
}