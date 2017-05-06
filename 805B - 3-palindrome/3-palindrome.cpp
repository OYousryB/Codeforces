#include<iostream>
#include<string>
using namespace std;
int main() {
	  int n;
	  string arr[] = {"aa", "bb"},end;
	  cin >> n;
	  if (n == 1) {
	    cout << "a"; 
		return 0;
	  }
	  if (n == 2) {
	    cout << "aa"; 
		return 0;
	  }
	  for (int i=0; i < n/2; i++) {
	    cout << arr[i%2];
	    end = arr[i%2];
	  }
	  if (n%2 != 0) {
	    if (end == "aa") 
			cout << "b";
	    else 
			cout << "a";
	  }
	  return 0;
}