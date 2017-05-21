#include <iostream>
#include <string>
using namespace std;
int main(){
	int n,chars[26] = {0},count=0;
	string s;
	cin>> n;
	cin >> s;
	 for(int i=0;i<s.length();i++){
        //int index = s[i]-'a';
        chars[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
    	if(chars[i]%n !=0){
	    	cout << -1 << endl;
	    	return 0;
	    }
    }
    for(int i=0;i<n;i++){
    	for(int j=0;j<26;j++){
	    	for(int k=0;k<chars[j]/n;k++){
	    		cout<<(char)(97+j);
	    	}
	    }
    }
   cout << endl;
}