#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,i;
    cin>>n>>k;
    
    while(k!=0){
        cout<<n<<" ";
        n--;
        k--;
    }
    for(i=1;i<=n;i++){
        cout<<i<<" ";
    }
	return 0;
}
