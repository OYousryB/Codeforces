#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,sum,hello1,hello2,x;
    char password[1111],num[1111];
    while(cin>>n){
        sum=0;
        for(int i=0;i<n;i++){
            cin>>num[i];
        }
        for(int i=0;i<n;i++){
            cin>>password[i];
        }
        for(int i=0;i<n;i++){
            if(num[i]>password[i]){
                hello1=num[i]-password[i];
                hello2=10+(password[i]-num[i]);
            }
            else{
                hello1=password[i]-num[i];
                hello2=10+(num[i]-password[i]);
            }
            if(hello1>hello2){
                x=hello2;
            }
            else{
                x=hello1;
            }
            sum+=x;
        }
        cout<<sum<<endl;
    }
    return 0;
}
