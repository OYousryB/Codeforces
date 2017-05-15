#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
	string s;
	int count=0;
	cin >> s;
	int j=s.length()-1;
	//cout << j;
	for(int i=0;i<s.length()/2;i++,j--){
		if(s[i] != s[j]){
			cout << i << " " << j;
			count++;
		}
		
			
	}
	
	if(count >1 || (s.length()%2==0 &&count ==0))
		cout << "NO"<<endl;
	else
		cout << "YES"<<endl;
	return 0;
}