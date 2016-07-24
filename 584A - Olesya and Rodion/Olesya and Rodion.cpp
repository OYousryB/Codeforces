#include <iostream>
using namespace std;

int main()
{
    int n, t, a=1;
    cin >> n >> t;

    if (n == 1 && t == 10)
        cout << -1 << endl;
    else
    {
        cout << t;
        if (t == 10) 
			a++;
        for (a; a < n; a++)
            cout << '0';
    }

    return 0;
}

/*

int main()
{
    int n,t;
    scanf("%d%d",&n,&t);
    if(t==10)
    {
        if(n==1)printf("-1");
        else
        {
            printf("1");
            for(int i=1;i<n;i++)
                printf("0");
        }
    }
    else
    {
        for(int i=0;i<n;i++)printf("%d",t);
    }
    return 0;
}
*/

