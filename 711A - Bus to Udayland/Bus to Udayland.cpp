#include<iostream>
#include<string>
using namespace std;
string a[1001];
int main(){
    
    int n;  
	cin>>n;
    bool f = 0;
    for (int i=0;i<n;i++){
        cin>>a[i];
        if (!f)
            if (a[i][0] == 'O' && a[i][1] == 'O'){
                a[i][0] = a[i][1] = '+';
                f = 1;
            }
        if (!f)
            if (a[i][3] == 'O' && a[i][4] == 'O'){
                a[i][3] = a[i][4] = '+';
                f = 1;
            }
    }
    if (f){
        cout<<"YES"<<endl;
         for (int i=0;i<n;i++){
            cout<<a[i]<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
   
    return 0;
}
