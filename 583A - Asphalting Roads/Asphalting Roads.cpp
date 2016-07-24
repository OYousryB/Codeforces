#include<iostream>
#include<cstring>
#include<algorithm>
#define MAX_N 55
using namespace std;

bool h[MAX_N],v[MAX_N];
int n;

int main(){
    cin>>n;
    for(int i=0;i<n*n;i++) {
        int a, b;
        cin >> a >> b;
        if (h[a] || v[b])continue;
        h[a] = v[b] = 1;
        cout << i+1 << " ";
    }
    cout<<endl;
    return 0;
}
