#include<iostream>
using namespace std;
int ax[30001];
int main()
{
    int j,k,x;
    cin>>x>>k;
    for(j=1;j<x;j++)
        cin>>ax[j];
    for(j=1;j<x+1;j++)
    {
        if(j == k)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else if(j > k)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        j=j+ax[j];
        j--;
    }
    cout<<"NO"<<endl;
}
