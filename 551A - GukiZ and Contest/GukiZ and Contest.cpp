#include <algorithm>
#include <iostream>
#include <cstdio>

using namespace std;

int N;
int rating[3000];

int pos[3000];
int rk[3000];

bool posCmp(int a, int b){ return rating[a] > rating[b]; }

int main()
{
    scanf("%d", &N);

    for(int Ni = 1; Ni <= N; Ni++)
    {
        scanf("%d", &rating[Ni]);
        pos[Ni] = Ni;
    }

    sort(pos+1, pos+N+1, posCmp);

    for(int Ni = 1; Ni <= N; Ni++)
    {
        rk[pos[Ni] ] = Ni;

        if( Ni != 1 && rating[pos[Ni] ] == rating[pos[Ni-1] ] )
            rk[pos[Ni] ] = rk[pos[Ni-1] ];
    }

    for(int Ni = 1; Ni <= N; Ni++)
    {
        printf("%d", rk[Ni]);

        if( Ni != N ) printf(" ");
        else puts("");
    }
}
