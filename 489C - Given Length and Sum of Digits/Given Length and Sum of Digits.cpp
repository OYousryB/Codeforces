#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    if(n==1 && m==0)
    {
        printf("0 0\n");
        return 0;
    }
    if(m<1 || m>n*9)
    {
        printf("-1 -1\n");
        return 0;
    }
    string a="", b="";
    for(int i=0;i<n;i++)
    {
        int x=min(9, m);
        m-=x, a+=(x+'0');
    }
    b=a;
    reverse(a.begin(), a.end());
    if(a[0]=='0')
        for(int i=0;i<n;i++)
            if(a[i]!='0')
            {
                ++a[0], --a[i];
                break;
            }
    cout<<a<<' '<<b;
    return 0;
}
