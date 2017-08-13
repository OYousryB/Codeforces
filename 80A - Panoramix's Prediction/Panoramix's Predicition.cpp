#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53 };
    int n,m,i=0;
    cin >> n >> m;
    while(a[i]<=n)
        i++;
    cout << ((a[i]==m)? "YES" : "NO")<<endl;
    return 0;
}
