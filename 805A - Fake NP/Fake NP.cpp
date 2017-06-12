#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long l,r,i;
    cin>>l>>r;
    if((r-l)>0){
        cout<<2<<endl;
        return 0;
    }
    if(r%2==0){
        cout<<2<<endl;
        return 0;
    }
    for(i=3;i*i<=r;i++){
        if(r%i==0)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<r<<endl;
    return 0;
}