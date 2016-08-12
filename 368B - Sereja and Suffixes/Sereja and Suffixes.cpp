#include <algorithm>
#include <iostream>
using namespace std;

bool flag[100001];
int arr[100001];
int dp[100001];

int main()
{

	
    int m,n,a;
    cin>> n >> m ;

    for(int i = 0; i < n ; i++)
        cin >>arr[i];

    for(int i= n-1; i >= 0; i--)
    {
        if(!flag[arr[i]])
        {
            dp[i]++;
            flag[arr[i]] = true;
        }
        dp[i] += dp[i+1];
    }

    for(int i = 0; i < m; i++)
    {
        cin >>a;
        cout<< dp[a-1]<<endl;
    }

    return 0;
}
