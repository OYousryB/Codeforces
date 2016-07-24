#include <cstdio>
using namespace std;

int main() {
  long long a, b;
  scanf("%I64d%I64d", &a, &b);

  long long ans = a / b;
  long long c = a - ans * b;
  while(c != 0) {
    a = b;
    b = c;
    long long buf = a / b;
    c = a - buf * b;
    ans += buf;
  }

  printf("%I64d\n", ans);

  return 0;
}
/*
Main int ()  
{  
Long I long, J, K, l, m, N, t;  
Long ans=0 long;  
Scanf ("%I64d%I64d", &n, &m);  
If (n<m)  
{  
T=n;  
N=m;  
M=t;  
}  
While (m! =1&&n%m! =0)  
{  
Ans+=n/m;  
I=n;  
J=m;  
N=j;  
M=i%j;  
}  
Ans+=n/m;  
Printf ("%I64d\n", ans);  
}  
*/
