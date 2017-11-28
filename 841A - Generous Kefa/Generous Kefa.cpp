#include <iostream>
#include <array>
#include <string>

using namespace std;;

int arr[109];

int main()
{
    int n,k;
	string s;
  	cin >> n >> k >> s;
   	for (int i = 0; i < n; i++){
   		arr[s[i]-'a']++;
   	}
	for (int i = 0; i < 100; i++){
		if (arr[i] > k){
		  	cout << "NO" << '\n';	
		    return 0;
		  }
	}
	cout << "YES" << '\n';
}
