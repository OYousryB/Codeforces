#include<iostream>
using namespace std;


int main()
{

        int n,m,k;
        cin>>n>>m>>k;
        int a[n+1][m+1];

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                a[i][j]=-1;
            }
        }
        for(int i=1;i<=k;i++)
        {
            int x,y;
            cin>>x>>y;
            a[x][y]=1;
            if(i<4)
            {
                continue;
            }
            if(a[x-1][y]==1 && a[x-1][y-1]==1 && a[x][y-1]==1)
            {
                cout<<i;
                return 0;
            }
            else if(a[x-1][y]==1 && a[x-1][y+1]==1 && a[x][y+1]==1)
            {
                cout<<i;
                return 0;
            }
            else if(a[x][y+1]==1 && a[x+1][y]==1 && a[x+1][y+1]==1)
                {
                cout<<i;
            return 0;
            }
            else if(a[x][y-1]==1 && a[x+1][y-1]==1 && a[x+1][y]==1)
            {
                cout<<i;
                return 0;
            }

        }





        cout<<"0";

        return 0;
}
