#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int a[105], b[105], print[105];

int main()
{
    int n, k, i, p;
    int sum, count;
    scanf("%d%d", &n, &k);
    int j=1;
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
        b[j] = a[i];
        j++;
    }
    sort(a, a+i);
    if(a[1]>k)
    {
        printf("0\n");
    }
    else
    {
        sum =0;
        count = 0;
        for(int i=1 ;i<=n; i++)
        {
            sum = sum + a[i];
            count ++;
            if(sum>=k)
            {
                if(sum==k)
                {
                    break;
                }
                else
                {
                    sum = sum - a[i];
                    count --;
                    break;
                }
            }
        }
        p = 1;
        for(int i=1; i<=count; i++)
        {
            for(int j=1; j<=n ;j++)
            {
                if(a[i]==b[j])
                {
                    print[p] = j;
                    b[j] = 0;
                    p++;
                }
            }
        }
        sort(print, print+p);
        printf("%d\n", count);
        for(p=1; p<=count; p++)
        {
            printf("%d ", print[p]);
        }
        printf("\n");
    }
}

