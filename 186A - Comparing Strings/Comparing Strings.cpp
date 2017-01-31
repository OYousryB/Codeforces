#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s1,s2;
    int cnt;
    cin >> s1 >> s2;
    if(s1.size() != s2.size()){
        cout << "NO" << endl;
        return 0;
    }
    for(int i=0; i<s1.size(); i++){
        if(s1[i] != s2[i])
            cnt++;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(cnt==2){
    	if(s1==s2)
        cout << "YES" <<endl;
    else
   		cout << "NO" <<endl;
    return 0;
    }
    else
    	cout << "NO" <<endl;
   	return 0;
}
    
