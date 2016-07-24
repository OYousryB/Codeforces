#include <iostream>
using namespace std;
int main(){
	long long n , m;
  	cin >> n >> m;
 	long long  kmx  = n- m +1;
 	kmx=  kmx*(kmx-1)/2;
 	long long kmn = ((n / m) * ((n / m) - 1)) / 2;
 	if(n % m == 0)
	 	{
   			kmn *= m;
  		}
  	else
	  	{
		   	kmn *= m - (n % m);
		   	long long lft =(((n / m) + 1 ) * (n / m)) / 2; 
		   	kmn += lft * (n % m);
	  	}
   	cout << kmn << " " << kmx << endl;
}
/*
typedef long long ll;
typedef unsigned long long ull;

ll nC2(ll n)
{
	if(n < 2)
		return 0;
	return (n * (n - 1) / 2);
	
}

int main()
{   
    ios::sync_with_stdio(false);
    ll n, m, minNoOfPairs, maxNoOfPairs;
    cin >> n >> m;
    minNoOfPairs = (m - n % m) * (nC2(n/m)) + (n % m) * (nC2(n/m + 1));
    maxNoOfPairs = nC2(n - m + 1);
    cout << minNoOfPairs << " " << maxNoOfPairs <<"\n";
    return 0;
}
*/
