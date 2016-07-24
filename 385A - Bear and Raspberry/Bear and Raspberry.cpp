#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;

int main() {
    int n, c, x[105], max, min, dif;
    max=INT_MIN;
    min=INT_MAX;
    dif=0;
    scanf("%d%d", &n, &c);
    for(int i=0; i<n; i++) scanf("%d", &x[i]);
    for(int i=0; i<n-1; i++) if(x[i]-x[i+1]>dif) max=x[i], min=x[i+1], dif=max-min;
    if(dif-c>0) printf("%d", dif-c);
    else printf("0");
    return 0;
}
