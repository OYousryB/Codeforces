#include<bits/stdc++.h>
using namespace std;

int n,m;
int l,r;

int maxL1=-1,minR1=1e9;
int maxL2=-1,minR2=1e9;

int main()
{
    cin>>n;
    for (int i=0; i<n; ++i){
        cin>>l>>r;
        maxL1=max(l,maxL1);
        minR1=min(r,minR1);
    }
    cin>>m;
    for (int i=0; i<m; ++i){
        cin>>l>>r;
        maxL2=max(l,maxL2);
        minR2=min(r,minR2);
    }
	int out = max(maxL2-minR1, maxL1-minR2);
    if (out< 0)
        cout<<0<<endl;
    else
        cout<< out <<endl;

    return 0;
}
