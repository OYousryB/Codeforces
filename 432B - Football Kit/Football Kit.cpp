#include<iostream>
using namespace std;
int main(){
    long long  n,i,h,a;
    cin >> n;
    long long  home[n],away[n];
    for(i=0;i<n;i++)
        cin >> home[i] >> away[i];
    long long  counter[100005]={0};
    for(i=0;i<n;i++)
        counter[home[i]]++;
    for(i=0;i<n;i++){
        h=n-1;a=0;
        if(counter[away[i]])
            h+=counter[away[i]];
        a=2*(n-1)-h;
        cout << h << " " << a << endl;
    }
    return 0;
}
