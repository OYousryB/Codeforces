#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
int main(){
	int x,y,fact=1;
    cin >> x>>y;
	int t= min(x,y);
    for(int i=1;i<=t;i++){
        fact=fact*i;
    }
    cout << fact <<endl;
    return 0;
}
