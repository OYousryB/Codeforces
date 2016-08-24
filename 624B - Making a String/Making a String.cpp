#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,i,a[26];
    cin >> n;
    long long int sum;
    for(i=0;i<n;i++)
    {
        cin >> a[i];

    }
    sort(a,a+n);
    sum=a[n-1];
    for(i=n-2;i>=0;i--)
    {
        if(a[i]==a[i+1])
        {
            a[i]--;

        }
        if(a[i]>a[i+1])
        {
            a[i]=a[i+1]-1;
        }
        if(a[i]<=0)
            break;
        sum+=a[i];

    }
    cout<<sum<<endl;

}
