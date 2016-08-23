#include <iostream>
#include <algorithm>
using namespace std;
int n,a[300010];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) 
        cin >> a[i];
    sort(a+1,a+n+1);
    cout<<a[(n+1)/2]<<endl;
    return 0;
}
