#include <iostream>
using namespace std;

int main()
{
    long long n,c,k,x,y;
    cin >> n >> c >> x;
    k=0;
    for (int i=1; i<n; i++){
    	cin >> y;
        if ((y-x)<=c)
        k++;
     else 
	 	k=0;
     x=y;
    }
    cout << k+1;
    return 0;
}
