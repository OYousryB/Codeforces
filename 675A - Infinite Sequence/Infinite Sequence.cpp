#include <stdio.h>
#include <iostream>  
#include <algorithm>  
using namespace std;  

int main()
{
    int a, b, c;
    cin >> a >> b >> c ;
    if(a == b) {
        cout << "YES"<<endl;
    } else {
        if(c == 0) {
            cout<< "NO"<<endl;
        } else if(c > 0 ) {
            cout<<(b > a && (b - a) % c == 0 ? "YES" : "NO")<<endl;
        } else {
            cout<<(b < a && (b - a) % c == 0 ? "YES" : "NO")<<endl;
        }
    }
    return 0;
}
