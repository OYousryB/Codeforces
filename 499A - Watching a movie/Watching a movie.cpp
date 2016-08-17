#include<iostream>
using namespace std;
int main()
{
    int t = 0;
    int l, r, n, m, x;
    cin >> n >> x;
    int sum ;
    int temp =0;
    for(int i=1; i<=n; i++)
    {
        cin >> l >> r;
        sum = 0;
        while(1)
        {
             t +=x;
             if(t>=l)
             {
                 t -=x;
                 sum += r-t;
                 t +=sum;
                 break;
             }
        }
        temp +=sum;
    }
    cout << temp;
}
