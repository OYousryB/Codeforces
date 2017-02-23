#include <string>
#include <iostream>
using namespace std;
string name;
int num;

int main()
{
    int t;
    cin >> t;
    int flag=0;
    int total=0;
    for(int i=1;i<=t;i++){
        cin>>num>>name;
        if(total==20000){
            if(name!="North")
                flag=1;
        }
        if(total>20000)
            flag=1;
        if(name=="South")
            total+=num;
        if(name=="North")
            total-=num;
        if(total<0 && name!="South")
            flag=1;
        if(i==1){
            if(name!="South")
                flag=1;
        }
        if(i==t){
            if(total!=0||name!="North")
                flag=1;
        }
    }
    if(flag)
       	cout << "NO" <<endl;
    else
        cout << "YES" <<endl;
    
    return 0;
}
