#include <vector>
#include <iostream>
#include <queue>
#include <cmath>
#include <map>
#include <cstring>
#include <algorithm>
#include <cstdio>

using namespace std;
#define Riep(n) for(int i=1;i<=n;i++)
#define Riop(n) for(int i=0;i<n;i++)
#define Rjep(n) for(int j=1;j<=n;j++)
#define Rjop(n) for(int j=0;j<n;j++)
#define mst(ss,b) memset(ss,b,sizeof(ss));
typedef  long long LL;
template<class T> void read(T&num) {
    char CH; bool F=false;
    for(CH=getchar();CH<'0'||CH>'9';F= CH=='-',CH=getchar());
    for(num=0;CH>='0'&&CH<='9';num=num*10+CH-'0',CH=getchar());
    F && (num=-num);
}
int stk[70], tp;
template<class T> inline void print(T p) {
    if(!p) { puts("0"); return; }
    while(p) stk[++ tp] = p%10, p/=10;
    while(tp) putchar(stk[tp--] + '0');
    putchar('\n');
}

const LL mod=1e9+7;
const double PI=acos(-1.0);
const LL inf=1e18;
const int N=1e4+20;
const int maxn=1005;
const double eps=1e-10;

char str[103][103];
int a[103];
int main()
{

    int n,d;
    read(n);read(d);
    for(int i=1;i<=d;i++)
    {
        scanf("%s",str[i]);
        int flag=0;
        for(int j=0;j<n;j++)
        {
            if(str[i][j]=='0')flag=1;
        }
        if(flag)a[i]=1;
    }
    int ans=0,len=0;
    for(int i=1;i<=d;i++)
    {
        if(a[i])
        {
            len++;
        }
        else
        {
            ans=max(ans,len);
            len=0;
        }
    }
    ans=max(ans,len);
        cout<<ans<<"\n";

        return 0;
}
