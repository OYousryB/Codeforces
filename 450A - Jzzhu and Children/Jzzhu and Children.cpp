#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;

int main () {
    int n, m, a, k = 0, id = 0;
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++) {
        cin >> a;
        int t = (a-1) / m + 1;
        if (t >= k) {
            k = t;
            id = i;
        }
    }
    cout<< id<<endl;
    return 0;
}
