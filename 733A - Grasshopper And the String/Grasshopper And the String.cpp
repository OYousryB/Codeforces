#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main ()
{
    int hops=1,maximum=0;
    string s;
    cin >>s;
    for (int i=0;i<s.size();i++){
        if (s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'){
            maximum=max(hops,maximum);
            hops=1;
        }
        else {
            hops++;
        }
    }
    maximum=max(maximum,hops);
    cout <<maximum<<endl;
}
