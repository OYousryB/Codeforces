#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
	int n,t,k,d;
	cin >> n >> t >> k >> d;
 	int r = (d+t)/t;
  	if (r*k < n) 
	  	cout << "YES" << endl;
  	else 
	  	cout << "NO" << endl;

  	return 0;

}