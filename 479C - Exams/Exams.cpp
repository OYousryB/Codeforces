#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
pair<int, int> p[5005];

int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>> p[i].first;
        cin>> p[i].second;
    }
    sort(p, p+n);
    int pre = min(p[0].first, p[0].second); 
    
    for (int i = 1; i < n; i++)
    {
        int tmp = min(p[i].first, p[i].second);
        pre = (tmp < pre ? max(p[i].first, p[i].second) : tmp);
    }
    cout<<pre;
    return 0;
} 
