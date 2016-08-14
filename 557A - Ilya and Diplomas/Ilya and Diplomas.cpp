#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int n;
    int mini[3], max[3];
    cin>>n;
    for(int i = 0; i < 3; i++) {
        cin >>mini[i] >>max[i];
    }
    int cur = min(n - mini[1] - mini[2], max[0]);
    cout << cur<< " ";
    n -= cur;
    cur = min(n - mini[2], max[1]);
    cout <<cur<< " " << n - cur<<endl;
    return 0;
}
