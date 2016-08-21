#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,s=0,ans=0;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a,a+n);
    for (int i=0; i<n; i++) {
        if (s <= a[i]) {
            ans++;
            s += a[i];
        }
    }
    cout << ans << endl;
    return 0;
}
