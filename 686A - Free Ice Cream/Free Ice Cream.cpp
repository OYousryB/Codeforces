#include <iostream>
using namespace std;
int main()
{
    long long  x,n,d,count=0;
    char c;
    cin >> n>>x;
    for (int i=0;i<n;i++)
    {
        cin>>c>>d;
        if(c=='+')
            x+=d;
        else if(c=='-')
        {
            if(x>=d)
                x-=d;
            else
                count++;
        }
    }
    cout << x << " " << count<< endl;
}
