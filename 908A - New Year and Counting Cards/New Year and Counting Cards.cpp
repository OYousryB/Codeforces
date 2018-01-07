#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string x;
    cin>>x;
    int s=0;
    for(int i=0; i<x.size(); i++){
        if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u' || (x[i]<='9' && (x[i]-'0')%2))
            s++;
    }
    cout<<s<<endl;
}
