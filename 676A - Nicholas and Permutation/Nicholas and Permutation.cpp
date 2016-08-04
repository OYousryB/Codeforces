#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1],min,max;
    for(int i=0;i<n;i++)
       {
           cin>>a[i];
            if(a[i]==1)
                min=i;
            if(a[i]==n)
                max=i;
       }
    if(min-max==n-1||min-max==-(n-1))
    {
        cout<<n-1<<endl;
    }
    else
    {
        if(min<max)
        {
            if(max-0>(n-1)-min)
                cout<<max-0<<endl;
            else
                 cout<<(n-1)-min<<endl;
        }
        else
        {
            if(min-0>(n-1)-max)
                cout<<min-0<<endl;
            else
                 cout<<(n-1)-max<<endl;
        }
    }
}
