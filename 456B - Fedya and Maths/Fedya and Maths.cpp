#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;
using namespace std;

int main() {
    string n;
    cin >> n;
    int x = n[n.length() - 1] - '0';
    if (n.length() >= 2) {
        x += ((n[n.length() - 2] - '0') * 10);
    }
    if (x % 4) {
        cout << 0;
        return 0;
    }
    cout << 4;
}
