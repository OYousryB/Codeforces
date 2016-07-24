#include <iostream>  
#include <cstdio>  
#include <string>  
#include <cmath>  
#include <iomanip>  
#include <ctime>  
#include <climits>  
#include <cstdlib>  
#include <cstring>  
#include <algorithm>  
#include <queue>  
#include <vector>  
#include <set>  
#include <map>  
//#pragma comment(linker, "/STACK:102400000, 102400000")  
using namespace std;  
typedef unsigned int li;  
typedef long long ll;  
typedef unsigned long long ull;  
typedef long double ld;  
const double pi = acos(-1.0);  
const double e = exp(1.0);  
const double eps = 1e-8;  
short n, k;  
int extra, value;  
  
int main()  
{  
    ios::sync_with_stdio(false);  
    while (~scanf("%hd%d", &n, &extra))  
    {  
        short num[55], cnt=0;  
        for (short i=0; i<n; i++)  
        {  
            scanf("%hd", &k);  
            bool flag = false;  
            while (k--)  
            {  
                scanf("%d", &value);  
                if (extra > value)  
                    flag = true;  
            }  
            if (flag)  
                num[cnt++] = i+1;  
        }  
        printf("%hd\n", cnt);  
        for (short i=0; i<cnt; i++)  
            printf("%d ", num[i]);  
        printf("\n");  
    }  
    return 0;  
}  
