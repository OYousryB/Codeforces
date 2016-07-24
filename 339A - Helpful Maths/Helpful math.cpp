#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
#define sf scanf
#define pf printf
typedef long long ll;
int a[105];

int main()
{
    string s;
    int i, k, len;
    cin >> s;
    len = s.length();
    k=1;
    int count = 1;
    for(i=0; i<len; i++)
    {
        a[0] = s[0]-'0';
        if(s[i]=='+')
        {
            a[k] = s[i+1]-'0';
            k++;
            count++;
        }
    }
    sort(a, a+k);
    for(k=0; k<count; k++)
    {
        cout << a[k];
        if(k==(count-1))
        {
            break;
        }
        cout <<"+";
    }
}
