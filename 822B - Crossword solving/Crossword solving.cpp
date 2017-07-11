#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
     int n,m,f=0,d=0;
    cin >> n >> m;
    string s,t;
    cin >> s >> t;
    int a[m-n+1];
    for(int i = 0; i <= m-n; i++){
        a[i] = 0;
    }
    for(int i = 0; i <= m-n ;i++){
        for(int j = i ; j < i + n; j++){
            if(t[j] == s[j-i]){
                a[i] = a[i] + 1;
            }
    }
    }
    for(int i = 0; i <= m-n; i++){
        if(a[i] > f){
            f = a[i];
            d = i;
        }
    }
    int ans = 0;
        for(int j = d; j < d + n; j++){
        if( t[j] != s[j - d]){
            ans++;
        }
    }
    cout << ans << endl;
    for(int j = d; j < d + n; j++){
        if( t[j] != s[j - d]){
            cout << j - d+1 << " ";
        }
    }
}
