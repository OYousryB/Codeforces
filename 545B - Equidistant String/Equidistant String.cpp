#include<iostream>
#include<string>
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    int i,p=0;
    int n=a.length();
    for(i=0;i<n;i++)
        if(a[i]==b[i])
            p++;
    if((n-p)%2!=0)
        cout << "impossible";
    else{
        int k=0;
        for(i=0;i<n;i++){
            if(a[i]==b[i])
                cout << a[i];
            else{
                if(k%2==0)
                    cout << a[i];
                else
                    cout << b[i];
                k++;
            }
        }
    }
    return 0;
}
