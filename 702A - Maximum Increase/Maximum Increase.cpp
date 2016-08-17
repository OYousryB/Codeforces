#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, a[100010];
    int ans, cnt;
    cin >> n; 
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] > a[i-1]) 
            cnt++;
        else 
            cnt = 1;
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}
