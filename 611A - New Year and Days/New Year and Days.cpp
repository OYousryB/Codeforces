#include <iostream>
#include <string>
using namespace std;

int x;
string y,z;
int d[7] = {52,52,52,52,53,53,52};
int m[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
int main(){
    cin >> x >> y >> z;
    string week = "week",month = "month";
    if (z == "week") cout << d[x-1] << endl;
    else{
        int ans = 0;
        for (int i = 0;i < 12;i++) if (m[i]>=x) ans++;
        cout << ans << endl;
    }
    return 0;
}
