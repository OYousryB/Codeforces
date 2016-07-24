#include <cstdio>
#include <algorithm>

using namespace std;
int main()  
{  
 
    int n, ans[1000005];  
    int s, e, tmp, m, k, cnt;  
    while(scanf("%d", &n)==1)  
    {  
        k = cnt = 1;  
        for(int i = 0; i < n; i++)  
        {  
            scanf("%d", &tmp);  
            for(int j = k; j < k + tmp; j++)  
            {  
                ans[j] = cnt;  
            }  
            k = k + tmp;  
            ++cnt;  
        }  
        scanf("%d", &m);  
        for(int i = 0; i < m; i++)  
        {  
            scanf("%d", &tmp);  
            printf("%d\n", ans[tmp]);  
        }  
    }  
    return 0;  
}  
