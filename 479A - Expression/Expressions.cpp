#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int p[10];

int main()
{
    int a, b, c, i;
    cin >> a >> b >> c;
    p[0] = a*b+c;
    p[1] = a+b*c;
    p[2] = a*(b+c);
    p[3] = (a+b)*c;
    p[4] = a+b+c;
    p[5] = a*b*c;
    sort(p, p+6);
    cout << p[5] << endl;
}
