#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

long long  n, m, xx1, xx2, dd, x1, x2;
double di, xx, yy;

int main()
{
    cin >> n;
    for (int i=1;i<=100;i++)
    {
        int s1=0, s2=0;
        di=sqrt(i-(4*(-n)));
        dd=ceil(di);
        xx=((-i)+di)/2;
        yy=((-i)-di)/2;
        x1=ceil(xx);
        x2=ceil(yy);
        xx1=x1;
        xx2=x2;
        while (x1)
        {
            s1+=x1%10;
            x1/=10;
        }
        while (x2)
        {
            s2+=x2%10;
            x2/=10;
        }
        if (xx1*xx1+i*xx1-n==0)
        {
            if (s1==i)
            {
                cout << xx1;
                return 0;
            }
        }
        if (xx2*xx2+i*xx2-n==0)
        {
            if (s2==i)
            {
                cout << xx2;
                return 0;
            }
        }
    }
    cout << -1;
}
