#include <iostream>
using namespace std;
long long n,k,i,a[500],s=0;
int main(){
        cin>>n>>k;
        for (i=0;i<n;i++)
                cin>>a[i];
        for (i=1;i<n;i++){
                if (k-a[i]-a[i-1]>=0){
                        s+=k-a[i]-a[i-1];
                        a[i]+=k-a[i]-a[i-1];
                }
        }
        cout<<s<<endl;
        for (i=0;i<n;i++)
                cout<<a[i]<<" ";
}
