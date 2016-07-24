#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int k,n,w;
    int rate;
    int cost=0;
    int loan;
    cin>> k >> n >> w;
    for(int i=1; i<=w; i++){
        rate=i*k;
        cost=cost+rate;
    }
    loan=cost-n;
    if(loan<0)
        loan=0;
    cout<<loan<<endl;

    return 0;
}

