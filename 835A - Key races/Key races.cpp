#include <bits/stdc++.h>

using namespace std;

int main() {
    int s,v1,v2,t1,t2,p1,p2 ;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    p1 = s*v1;
    p2 = s*v2;
    if ((p1 + 2*t1) < (p2 + 2*t2))
    	cout<<"First";
    else if((p1 + 2*t1) > (p2 + 2*t2))  
    	cout<<"Second";
    else 
    	cout<<"Friendship";
    return 0;
}
