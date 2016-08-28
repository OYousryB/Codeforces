#include <iostream>
using namespace std;
int main(){
 long long int t,x,s;
 cin>>t>>s>>x;
 if(x<t || x==t+1 || (x-t-1)%s!=0&&(x-t)%s!=0)
    cout<<"NO"<<endl;
 else 
    cout<<"YES"<<endl;
 return 0;
}
