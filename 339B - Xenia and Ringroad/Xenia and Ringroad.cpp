#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int task[100001];
    task[0] = 1;
    for(int i = 1; i <= m; i++)
        cin >> task[i];

    long long int ans = 0;
    for(int i = 1; i <= m; i++)
    {
        if( task[i] >= task[i-1 ])
            ans += task[i] - task[i-1];
        else
            ans += task[i] - task[i-1] + n;
    }
    cout << ans << endl;
}
