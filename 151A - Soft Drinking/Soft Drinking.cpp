#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int aa = k * l / nl;
  int bb = c * d;
  int cc = p / np;

  int m = min(aa, bb);
  m = min(m, cc);

  int ans = m / n;

  cout<<ans<<endl;
  return 0;
}
/* 
cout << min(min(k * l / nl, c * d), p / np) / n << endl;
*/
