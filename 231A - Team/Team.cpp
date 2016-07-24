#include <iostream>

using namespace std;

int main() {  
    int n, p, v, t, solve = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p >> v >> t;
        if (p + v + t > 1) {
            solve++;
        }
    }
    cout << solve << "\n";
    return 0;
}
