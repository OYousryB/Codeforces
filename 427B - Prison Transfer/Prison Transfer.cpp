#include <iostream>
using namespace std;
int main()
{
	
  	long long n ,t ,c;
  	long long p ,count=0,total=0;
  	cin>>n>>t>>c;
	for (long long i=0;i<n;i++){
	   	cin >>p;
	   	if (p <= t)
	        count++;
	   	else 
			count=0;
		if (count >= c) 
	 		total++;
 	}
 	cout <<total<<endl;
   	return 0; 
 }