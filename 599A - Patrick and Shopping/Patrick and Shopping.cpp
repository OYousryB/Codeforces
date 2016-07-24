#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int a, b, c, d;
  cin >> a >> b >> c;
  d = a + b + c;
  cout << min(d, 2 * (d - max(a, max(b, c))));
}
