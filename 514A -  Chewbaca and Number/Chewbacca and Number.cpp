#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin >> s;
    int n = s.length();
    for(int i = 0; i < n; ++i) {
        int x = s[i] - '0';
        cout << min(x, 9 - x > 0 || i > 0 ? 9 - x : x);
    }
    return 0;
}
