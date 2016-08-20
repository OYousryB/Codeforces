#include <iostream>
using namespace std;
int a[1000005];
int main() {
  int n;
  cin >> n;
  long long sum = 0;
  for (int i = 0; i < n; i++){
    cin >> a[i];
    sum += a[i];
  }
  long long ans = 0;
  if (sum % 3 == 0){
    long long cnt = 0;
    long long cur = 0;
    for (int i = 0; i < n; ++i){
      cur += a[i];
      if (cur == 2 * (sum / 3) && i > 0 && i < n - 1) {
        ans += cnt;

      }
      if (cur == sum / 3) 
			cnt++;
    }
  }
  cout << ans << endl;
  return 0;
}
