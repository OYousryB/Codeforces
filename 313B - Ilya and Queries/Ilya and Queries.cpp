#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    char s[100001];
    int a[100001];
    int m,l,r;

    cin>>s>>m;
    int len = strlen(s);

    //a[1] = 0;
    for (int i = 0; i < len; ++i)
    {
        if (s[i] == s[i-1])
        {
            a[i+1] = a[i] + 1;
        }
        else
        {
            a[i+1] = a[i];
        }
    }

    for(int i =0; i<m;i++)
    {
        cin>>l>>r;
        cout<<a[r] - a[l]<<endl;
    }
    return 0;
}
