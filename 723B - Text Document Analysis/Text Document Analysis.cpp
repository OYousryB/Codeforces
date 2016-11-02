#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int n,wordsOut,wordsIN,parentheses=0,ans=0,sum=0;
	char s[1000];
	cin >>n >> s;
	for(int i=0; i<n;){
		while(s[i]=='_' && i<n){
			i++;
		}
		if(s[i] =='('){
			parentheses=1;
			i++;
		}
		if(s[i] ==')'){
			parentheses=0;
			i++;
		}
		if(parentheses==0){
			wordsOut=0;
			while(s[i] != '_' && s[i] != '(' && i<n){
				wordsOut++;
				i++;
			}
			ans = max(ans,wordsOut);
		}
		if(parentheses==1){
			wordsIN = 0;
			while(s[i] != '_' && s[i] != ')' && i<n){
				i++;
				wordsIN = 1;
			}
			sum+=wordsIN;
		}
	}
	cout <<ans<<" "<<sum<<endl;
	return 0;
}
	
