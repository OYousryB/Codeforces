#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 
int main() {
	int n ; 
	string s ;
	cin>> n >> s;
	sort(s.begin() , s.end());
	int count=0;
	if (n >26 )
	  cout<<"-1"<<endl; 
	else{
   	   for (int i=0 ; i<n ; i++){
	      if (s[i] == s[i+1])
		     count++;
	    }
	   cout<<count;
	  }
	 return 0;
}
