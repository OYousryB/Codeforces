#include <iostream>
#include <string>
using namespace std;
string s;
int main(){
	long long n,anton=0,danik=0;
	cin >> n >> s;
	for(int i=0;i<n;i++){
		if(s[i]=='A')
			anton++;
		else if(s[i]=='D')
			danik++;
	}
	
	if(anton>danik)
		cout << "Anton"<<endl;
	else if(anton<danik)
		cout << "Danik"<<endl;
	else if (anton=danik)
		cout <<"Friendship"<<endl;
		
	return 0;
}
		
	 
