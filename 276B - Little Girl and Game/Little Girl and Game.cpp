#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr[26]={0},ans=0;
    string s;
    cin>> s;
    for(int i=0;i<s.size();i++){
    	int index= s[i]-'a';
    	arr[index]++;
	}
    for(int i=0;i<26;i++){
        if(arr[i]%2!=0)
			ans++;
    }
    if((ans==0) || (ans%2!=0))
		cout<<"First"<<endl;
    else 
		cout<<"Second"<<endl;
	return 0;
}
