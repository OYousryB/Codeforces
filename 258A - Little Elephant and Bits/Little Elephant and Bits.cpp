#include <iostream>
#include <string>
using namespace std;

int main(){
    string s,p;
    int i;
    bool flag=false;
    cin>>s;
    for(i=0;i<s.length();i++){
        if(s[i]=='0' && flag==false){
            flag=true;
        }
        else p+=s[i];
    }
    if(!flag){
        for(i=0;i<p.length()-1;i++)
			cout<<p[i];
    }
    else
		cout<<p<<endl;
    return 0;
}
