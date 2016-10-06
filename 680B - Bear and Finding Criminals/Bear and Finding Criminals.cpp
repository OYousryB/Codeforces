#include <iostream>
using namespace std;

int n, s, a[10000], ans;
int main () {
    cin >> n >> s;
    for (int i = 1;i <= n; i++)
        cin >> a[i];
    if (a[s] == 1)
        ans ++;
    for (int i = 1;i <= n; i++) {
        if (s + i <= n) {
            if (s - i >= 1 && a[s - i] == 1 && a[s + i] == 1)
                ans += 2;
            else if (a[s + i] == 1 && s - i < 1)
                ans ++;
        }
        else if (s - i >= 1) {
            if (a[s - i] == 1 && a[s + i] == 1)
                ans += 2;
            else if (a[s - i] == 1 && s + i > n)
                ans ++;
        }
    }
    cout << ans;
    return 0;
}
