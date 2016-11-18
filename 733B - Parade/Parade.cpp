#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int l[10000];
int r[10000];
int main()
{
    int n,L=0,R=0,ans=0;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> l[i] >> r[i];
        L+=l[i];
        R+=r[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(abs((L-l[i]+r[i])-(R-r[i]+l[i]))>abs((L-l[ans]+r[ans])-(R-r[ans]+l[ans])))
			ans=i;
    }
    cout << ans <<endl;
    return 0;
}
