#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    cout<<(abs((b%n)+a+n)%n>0?abs((b%n)+a+n)%n:n);
}
